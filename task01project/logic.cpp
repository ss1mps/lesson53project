#include "logic.h"

void sort_bubble(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		bool flag = true;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1]) {
				flag = false;
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
		if (flag) {
			break;
		}
	} 
}

string search_duplicates(int array[], int size) {
	if (size <= 0) {
		return "Error.";
	}

	void sort_bubble(int array[], int size);

	string duplicate = "";

	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] == array[i + 1]) {
			duplicate += to_string(array[i]) + " ";
			i++;
		}
	}

	return duplicate;
}