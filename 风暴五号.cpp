#include<iostream>
int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << "* ";
		}
		std::cout << '\n';

	}
	std::cout << '\n';
	for (int a = 1; a < 10; a++) {
		for (int b = 1; b <= a; b++) {
			std::cout << b << "*" << a << "=" << a * b << "\t";
		}
		std::cout << '\n';
	}
    system("pause");
	return 0;
}