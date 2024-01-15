//#include <stdio.h>
//#include <ctype.h>
//
//double number;
//
//int getnum(void) {
//    double value = 0.0;
//    int c;
//    double power = 1.0;
//
//    while (isdigit(c = getchar())) {
//        value = value * 10.0 + (c - '0');
//    }
//
//    if (c == '.') {
//        while (isdigit(c = getchar())) {
//            value = value * 10.0 + (c - '0');
//            power *= 10.0;
//        }
//    }
//
//    number = value / power;
//
//    return 1;
//}
//
//int getop(void) {
//    int c;
//
//    while (isblank(c = getchar()));
//
//    if (c == EOF) return -1;
//
//    if (c == '\n') return 0;
//
//    if (isdigit(c) || c == '.') {
//        ungetc(c, stdin);
//        getnum();
//        return '0';
//    }
//
//    return c;
//}
//
//double stack[32];
//int depth = 0;
//
//void push(double d) {
//    stack[depth++] = d;
//}
//
//double pop() {
//    return stack[--depth];
//}
//
//int main() {
//    double lhs, rhs;
//    for (;;) {
//        int c = getop();
//        switch (c) {
//            case -1: printf("EOF\n"); return 0;
//            case 0: while(depth > 0) {
//                    printf("%g ",pop());
//                }
//                printf("\n");
//                break;
//            case '0': push(number); break;
//            case '+':
//                rhs = pop();
//                lhs = pop();
//                push(lhs + rhs);
//                break;
//            case '-':
//                rhs = pop();
//                lhs = pop();
//                push(lhs - rhs);
//                break;
//            case '/':
//                rhs = pop();
//                lhs = pop();
//                push(lhs / rhs);
//                break;
//            case '*':
//                rhs = pop();
//                lhs = pop();
//                push(lhs * rhs);
//                break;
//            default: printf("unknown operator '%c'\n", c); break;
//        }
//    }
//    return 0;
//}
