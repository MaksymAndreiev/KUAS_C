#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

int listFiles(const char *basePath, const char *searchString) {
    DIR *dir;
    struct dirent *entry;
    struct stat statbuf;

    if ((dir = opendir(basePath)) == NULL) {
        fprintf(stderr, "Error opening directory: %s\n", basePath);
        return 1;  // Return an error code
    }

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // Construct the full path
        char path[PATH_MAX];
        snprintf(path, sizeof(path), "%s/%s", basePath, entry->d_name);

        // Use stat to determine if it's a directory
        if (stat(path, &statbuf) == -1) {
            fprintf(stderr, "Error getting file status: %s\n", path);
            closedir(dir);
            return 1;  // Return an error code
        }

        if (S_ISDIR(statbuf.st_mode)) {
            // Recursively list files in the subdirectory
            if (listFiles(path, searchString) != 0) {
                closedir(dir);
                return 1;
            }
        } else {
            // Check if the filename contains the search string
            if (searchString == NULL || strstr(entry->d_name, searchString) != NULL) {
                printf("%s\n", path);
            }
        }
    }

    closedir(dir);
    return 0;
}

int main(int argc, char *argv[]) {
    const char *startPath;
    const char *searchString = NULL;

    // Use the current directory if no command-line argument is provided
    if (argc == 1) {
        startPath = ".";
    } else if (argc == 2 || argc == 3) {
        startPath = argv[1];
        if (argc == 3) {
            searchString = argv[2];
        }
    } else {
        fprintf(stderr, "Usage: %s [directory] [searchString]\n", argv[0]);
        return 1;
    }

    if (listFiles(startPath, searchString) != 0) {
        return 1;
    }

    return 0;
}
