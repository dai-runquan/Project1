#include<iostream>
static void test01() {
	std::cout << "test01函数被调用" << '\n';
}
static void test02(int a) {
	std::cout << "test02函数被调用，参数a的值为：" << a << '\n';
}
static int test03() {
	std::cout << "test03函数被调用" << '\n';
	return 100;
}
static int test04(int a) {
	std::cout << "test04函数被调用，参数a的值为：" << a << '\n';
	return a;
}
int main() {
	test01();
	test02(100);
	int ret = test03();
	std::cout << "test03函数的返回值为：" << ret << '\n';
	int ret2 = test04(200);
	std::cout << "test04函数的返回值为：" << ret2 << '\n';
	/*int a = 10;
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
	std::cout << "您输入的数字是：" << day << '\n';*/
	system("pause");
	return 0;
}
