#include "logic.h"

int main() {
	long long number;
	cout << "Input a number of tribonacci: ";
	cin >> number;

	cout << find_tribonacci(number);
	return 0;
}