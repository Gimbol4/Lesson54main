#include "test.h"

void run_test(const char* test_name, int result, int expected) {
    if (result == expected) {
        cout << "[PASS] " << test_name << "\n";
    }
    else {
        cout << "[FAIL] " << test_name << " (Expected: " << expected
            << ", result: " << result << ")\n";
    }
}