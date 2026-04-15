#include "logic.h"

int main() {
	int number;
	cout << "Input a number: ";
	cin >> number;

	cout << (recursion_is_power_of_four(number) ? "Your number is power of four!" : "Your number isn't a power of four(");
	return 0;
}