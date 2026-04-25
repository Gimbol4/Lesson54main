#include "logic.h"

long long find_tribonacci(int number) {
    if (number == 0 || number == 1) return 0;
    if (number == 2) return 1;

    long long t0 = 0, t1 = 0, t2 = 1, tn = 0;

    for (int i = 3; i <= number; ++i) {
        tn = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = tn;
    }
    return t2;
}

long long recursion_find_tribonacci(int number) {
    if (number == 0 || number == 1) return 0;
    if (number == 2) return 1;

    return recursion_find_tribonacci(number - 1) +
        recursion_find_tribonacci(number - 2) +
        recursion_find_tribonacci(number - 3);
}//