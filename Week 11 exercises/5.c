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
//    printf("%.2f, %.2f", point_x(p), point_y(p));
//    return p;
//}
//
//struct point point_newRA(double r, double a) {
//    double angle = (a / 360) * 2 * M_PI;
//    struct point p = {r * cos(angle), r * sin(angle)};
//    return p;
//}
//
//int main(int argc, char **argv) {
//    struct point p = point_newRA(5, 53.13);
//    point_printXY(p);
//    putchar('\n');
//    return 0;
//}