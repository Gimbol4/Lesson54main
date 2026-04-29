#include "test.h"

int main() {
    int sorted_array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = sizeof(sorted_array) / sizeof(sorted_array[0]);

    cout << "--- Запуск тестов ---\n";

    run_test("Mid element", binary_search(sorted_array, size, 9), 4);

    run_test("First element", binary_search(sorted_array, size, 1), 0);

    run_test("Last element", binary_search(sorted_array, size, 19), 9);

    run_test("Value less than min", binary_search(sorted_array, size, 0), -1);

    run_test("Value greater than max", binary_search(sorted_array, size, 20), -1);

    run_test("Value missing middle", binary_search(sorted_array, size, 8), -1);

    int one_el[] = { 10 };
    run_test("One element - found", binary_search(one_el, 1, 10), 0);

    run_test("One element - not found", binary_search(one_el, 1, 5), -1);

    return 0;
}
//