//
// Created by Maksym Andreiev on 04.12.2023.
//

#include <stdio.h>

struct point {
    double x, y;
};

struct rectangle {
    struct point origin;
    struct point corner;
};

struct rectangle rectangle_new(struct point origin, struct point corner) {
    struct rectangle r = {origin, corner};
    return r;
}

struct rectangle *rectangle_println(struct rectangle *r) {
    printf("Origin: (%.2f, %.2f)\n", r->origin.x, r->origin.y);
    printf("Corner: (%.2f, %.2f)\n", r->corner.x, r->corner.y);
    return r;
}

int rectangle_includes(struct rectangle *r, struct point *p) {
    if (p->x >= r->origin.x && p->x < r->corner.x &&
        p->y >= r->origin.y && p->y < r->corner.y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
//    struct point origin = {-3, -2};
//    struct point corner = {3.0, 2.0};
//    struct rectangle rent1 = rectangle_new(origin, corner);
//
//    rectangle_println(&rent1);
//
//    struct point inside = {1.0, 1.0};
//    struct point inside_ = {-2.5, 1.5};
//    struct point outside = {4.0, 5.0};
//
//    struct point points[3] = {inside, inside_, outside};
//
//    for (int i = 0; i < 3; i++) {
//        printf("Point (%.2f, %.2f) is %s rectangle\n", points[i].x, points[i].y,
//               (rectangle_includes(&rent1, &points[i])) ? "inside" : "outside");
//    }
    int a[10];
    int *p = &a[3];
    int *q = &a[6];
    printf("%d", q-p);
    return 0;
}
