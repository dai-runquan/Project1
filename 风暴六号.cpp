#include<iostream>
int main() {
	int dividend, divisor, quotient;
	std::cout << "Enter dividend: ";
	std::cin >> dividend;
	std::cout << "Enter divisor: ";
	std::cin >> divisor;
	if (divisor == 0) {
		std::cout << "Error: Division by zero is not allowed.\n";
		system("pause");
		return 1; // Exit with an error code
	}
	else if (dividend == 0) {
		std::cout << "Error: Dividend cannot be zero.\n";
		system("pause");
		return 1; // Exit with an error code
	}
	else {
		quotient = dividend / divisor;
		std::cout << dividend << " / " << divisor << " = " << quotient << '\n';
	}
	std::cout << 'A' << '\101' << '\x41' << (char)65 << '\n';
	system("pause");
	return 0;
}
