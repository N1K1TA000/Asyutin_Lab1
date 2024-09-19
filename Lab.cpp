#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int age;

	cin >> age;
	if (age >= 18) {
		cout << "ви досягли повноліття!";
	}
	else {
		cout << "ви не досягли повноліття(";
	}
	return 0;
}
