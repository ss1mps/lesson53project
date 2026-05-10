#include "logic.h"
#include "util.h"

int main() {

	int array[DEFAULT_SIZE];
	
	int size;

	cout << "Input size of array: ";
	cin >> size;

	init_random(array, size, -20, 20);

	print("Array before: " + convert(array, size));

	sort_bubble(array, size);
	print("\nArray after: " + convert(array, size));

	string duplicate = search_duplicates(array, size);

	print("\nAll duplicates from array: " + duplicate + ".\n");

	return 0;
}