#include <iostream>
#include <string>
#define DEFAULT_SIZE 100000

using namespace std;

void test01() {
	for (int i = 0; i < 100000000; i++);
}

void test02() {
	for (int i = 0; i < 1000000000; i++);
}


int main() {
	long long start = time(NULL);
	test01();
	long long finish = time(NULL);
	cout << "Test01 running with: " << finish - start << "secods.\n";

	start = time(NULL);
	test02();
	finish = time(NULL);
	cout << "Test02 running with: " << finish - start << "secods.\n";
	return 0;
}