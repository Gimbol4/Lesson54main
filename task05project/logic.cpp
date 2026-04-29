#include "logic.h"

void view_hanoi_tower(int n, char a, char b, char c) {
    if (n == 1) {
        cout <<  a << " >> " << b << endl;
        return;
    }

    view_hanoi_tower(n - 1, a, c, b);

    cout << a << " >> " << b << endl;

    view_hanoi_tower(n - 1, c, b, a);
}