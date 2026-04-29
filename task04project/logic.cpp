#include "logic.h"

int find_largest_square(int length, int width) {

    if (length % width == 0) {
        return width;
    }

    return find_largest_square(width, length % width);
}