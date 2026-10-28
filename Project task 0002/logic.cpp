#include "logic.h"
double get_average(const int* array, int size) {
	if (size <= 0) return 0.0;

	long long sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += array[i];
	}
	return sum / size;
}

int count_greater(const int* array, int size) {
	if (size <= 0) return 0.0;

	double avg = get_average(array, size);
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] > avg) {
			count++;
		}
	}
	return count;
}