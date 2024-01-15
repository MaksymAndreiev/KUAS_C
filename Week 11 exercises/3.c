////
//// Created by Maksym Andreiev on 04.12.2023.
////
//
//#include <stdio.h>
//
//struct point {
//    double x, y;
//};
//
//struct point point_newXY(double x, double y) {
//    struct point p = {x, y};
//    return p;
//}
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
//    printf("%f,%f", point_x(p), point_y(p));
//    return p;
//}
//
//int main(int argc, char **argv) {
//    struct point p = point_newXY(3.0, 4.0);
//    point_printXY(p);
//    putchar('\n');
//    return 0;
//}