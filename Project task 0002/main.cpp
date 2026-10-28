#include "logic.h"
#define MAX_SIZE 100
int main() {
	int size;
	int array[MAX_SIZE];
	cout << "Input array size:";
	cin >> size;

	if (size <= 0 or size > MAX_SIZE) {
		cout << "Error.Size must be between 1 and " << MAX_SIZE << endl;
		return 1;
	}
	cout << "Input elements:";
	for (int i = 0; i < size; ++i) cin >> array[i];

	double average = get_average(array, size);
	int count = count_greater( array,size);

	cout << "Arithmetic average: " << average << endl;
	cout << "Elements greater than average: " << count << endl;


	return 0;
}