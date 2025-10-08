#include<iostream>
#include<windows.h>
#include<ctime>
int main() {
	int a = 10;
	std::cout << "a = " << a << '\n';
	Sleep(1000);
	a++;
	std::cout << "a = " << a << '\n';
	Sleep(1000);
	++a;
	std::cout << "a = " << a << '\n';
	Sleep(1000);
	int b = 20;
	while (b <= 42) {
	std::cout << "b = " << b << '\n';
	b += 1;
	Sleep(100);
	}
	srand((unsigned int)time(NULL));
	int d = rand() % 100 + 1;
    int c = 100;
	std::cout << "请输入一个1-100的整数："<< '\n';
	std::cin >> c;
	while (c != d) {
	    if (c > d) {
			std::cout << "大了，请重新输入一个1-100的整数：" << '\n';
			std::cin >> c;
		}
		else {
			std::cout << "小了，请重新输入一个1-100的整数："<< '\n';
			std::cin >> c;
		}
    }
	std::cout << "恭喜你，猜对了！答案就是" << d << '\n';
	system("pause");
	return 0;
}

