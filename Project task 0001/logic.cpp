#include "logic.h"
bool are_positive(const int* array, int size) {
	if (size <= 0) return false;

	for (int i = 0; i < size; ++i) {
		if (array[i] <= 0) {
			return false;
		}
	}
	return true;
}

bool are_negative(const int* array, int size) {
	if (size <= 0) return false;

	for (int i = 0; i < size; ++i) {
		if (array[i] >= 0) {
			return false;
		}
	}
	return true;
}