#include<iostream>
int main() {
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	std::cout << c << std::endl;
	(a > b ? a : b) = 100;
	std::cout << a << std::endl;
	std::cout << "请给电影打分" << '\n';
	int score = 0;
	std::cin >> score;
	switch (score) {
	case 1:
		std::cout << "烂片" << '\n';
		break;
	case 2:
		std::cout << "一般" << '\n';
		break;
	case 3:
		std::cout << "还行" << '\n';
		break;
	default:
		std::cout << "好片" << '\n';
		break;
	}
	int day = 0;
	do {
		std::cout << "请输入一个1-7的整数代表星期几：" << '\n';
		std::cin >> day;
	} 
	while (day < 1 || day>7);
	std::cout << "您输入的数字是：" << day << '\n';
	system("pause");
	return 0;
}
