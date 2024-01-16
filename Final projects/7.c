#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <limits.h>

void exploreDirectory(const char *currentPath) {
    DIR *directory;
    struct dirent *entry; // Directory entry
    struct stat fileStat; // Instead of d_type

    if ((directory = opendir(currentPath)) == NULL) {
        printf("Error opening directory: %s\n", currentPath);
        exit(EXIT_FAILURE);
    }

    printf("Listing files in %s:\n", currentPath);

    // Iterate over entries in the directory
    while ((entry = readdir(directory)) != NULL) {
        // Skip special directories "." and ".."
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // Construct the full path for the current entry
        char fullPath[PATH_MAX];
        snprintf(fullPath, sizeof(fullPath), "%s/%s", currentPath, entry->d_name);

        // Retrieve file status to determine if it's a directory
        if (stat(fullPath, &fileStat) == -1) {
            printf("Error getting file status: %s\n", fullPath);
            closedir(directory);
            exit(EXIT_FAILURE);
        }

        if (S_ISDIR(fileStat.st_mode)) {
            // Recursively explore subdirectories
            exploreDirectory(fullPath);
        } else {
            // Print the file name
            printf("%s\n", fullPath);
        }
    }
    closedir(directory);
}

int main(int argc, char *argv[]) {
    const char *startLocation;

    if (argc == 1) {
        startLocation = ".";  // Use the current directory if no argument is provided
    } else if (argc == 2) {
        startLocation = argv[1];
    } else {
        printf("Usage: %s [directory]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    exploreDirectory(startLocation);
    return 0;
}
