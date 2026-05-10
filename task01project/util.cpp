#include "util.h"

string convert(int array[], int size) {
	if (size <= 0) {
		return "Error.";
	}

	string s = to_string(array[0]);

	for (int i = 1; i < size; i++) {
		s += " " + to_string(array[i]);
	}
	
	return s;
}
void init_random(int array[], int size, int a, int b) {
	if (size <= 0) {
		return;
	}

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}
}
void print(string msg) {
	cout << msg;
}