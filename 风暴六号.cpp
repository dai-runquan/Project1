#include<iostream>
void swap(int * x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
int main() {
	/*int dividend, divisor, quotient;
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
	std::cout << 'A' << '\101' << '\x41' << (char)65 << '\n';*/
	/*int a = 0;
	int * p = &a;
	*p = 999;
	std::cout << "&a=" << &a << std::endl;
	std::cout << "p=" << p << std::endl;
	std::cout << "sizeof(a)=" << sizeof(a) << std::endl;
	std::cout << "sizeof(p)=" << sizeof(int *) << std::endl;
	std::cout << "sizeof(*p)=" << sizeof(*p) << '\n';
	int* q = NULL;
	std::cout << "q=" << q << std::endl;
	int* s = (int*)0x0012FF7C;
	std::cout << "s=" << s << std::endl;
	const int* pr = &a;
	int* const ps = &a;
	const int* const pt = &a;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	std::cout << "arr=" << arr << std::endl;
	int* arrp = arr;
	for (int i = 0; i < 10; i++) {
		//std::cout << *(arrp + i) << " ";
		std::cout << *(arrp) << " ";
		arrp++;
	}
	std::cout << std::endl;*/
	int x = 10;
	int y = 20;
	std::cout << "Before swap: x=" << x << ", y=" << y << std::endl;
	swap(&x, &y);
	std::cout << "After swap: x=" << x << ", y=" << y << std::endl;
	int brr[5] = { 64, 34, 25, 12, 22 };
	bubbleSort(brr, 5);
	std::cout << "Sorted array: ";
	for (int i = 0; i < 5; i++) {
		std::cout << brr[i] << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}
