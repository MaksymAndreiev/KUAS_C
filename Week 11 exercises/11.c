////
//// Created by Maksym Andreiev on 04.12.2023.
////
//
//#include <stdio.h>
//#include <math.h>
//
//struct point {
//    double x, y;
//};
//
//double point_x(struct point p) {
//    return p.x;
//}
//
//double point_y(struct point p) {
//    return p.y;
//}
//
//struct point point_printXY(struct point p) {
//    printf("(%f, %f)", point_x(p), point_y(p));
//    return p;
//}
//
//double point_r(struct point p) {
//    return sqrt(pow(point_x(p), 2) + pow(point_y(p), 2));
//}
//
//double point_a(struct point p) {
//    return atan2(p.y, p.x) / (2 * M_PI) * 360;
//}
//
//struct point point_newRA(double r, double a) {
//    double angle = (a / 360) * 2 * M_PI;
//    struct point p = {r * cos(angle), r * sin(angle)};
//    return p;
//}
//
//void point_printRA(struct point p) {
//    printf("r = %f, theta = %f", point_r(p), point_a(p));
//}
//
//int main(int argc, char **argv) {
//    struct point p1 = point_newRA(5, 53.13);
//    point_printXY(p1);
//    putchar('\n');
//    point_printRA(p1);
//    putchar('\n');
//
//    struct point p2 = point_newRA(2, 0);
//    point_printXY(p2);
//    putchar('\n');
//    point_printRA(p2);
//    putchar('\n');
//
//    struct point p3 = point_newRA(6, 90);
//    point_printXY(p3);
//    putchar('\n');
//    point_printRA(p3);
//    putchar('\n');
//    return 0;
//}
