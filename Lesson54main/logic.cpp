#include "logic.h"

bool is_power_of_four(int number) {
	if (number <= 0) {
		return false;
	}
	while (number % 4 == 0) {
		number /= 4;
	}
	return number == 1;
}

bool recursion_is_power_of_four(int number) {
	if (number <= 0) return false;
	if (number == 1) return true;
	if (number % 4 != 0) return false;

	return recursion_is_power_of_four(number / 4);
}

