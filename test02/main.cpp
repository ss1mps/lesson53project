#include "..\\task01project\util.h"
#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];

	int size;

	cout << "Input size of array: ";
	cin >> size;

	init_random(array, size, 0, 100);

	print("Array before sorting: " + convert(array, size));

	sort_selected(array, size);

	print("\nArray before sorting: " + convert(array, size));

	return 0;
}