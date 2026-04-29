#include "logic.h"

int main() {
    int length = 1680;
    int width = 640;

    int result = find_largest_square(length, width);

    cout << "The largest square is: " << result << "x" << result << endl;

    return 0;
}