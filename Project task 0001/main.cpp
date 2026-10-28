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
    
	if (are_positive(array, size)) {
		cout << "All elements are positive." << endl;
	}
	else if (are_negative(array, size)) {
		cout << "All elements are negative." << endl;
	}
	else {
		cout << "Elements have mixed sings." << endl;
	}
	return 0;

}