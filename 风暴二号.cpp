#include<iostream>
#include"swap.h"
static int add(int x, int y) {
	int z = x + y;
    return z;
}
//void swap(int x, int y) {
	/*std::cout << "交换前：x=" << x << ", y=" << y << '\n';
	int temp = x;
	x = y;
	y = temp;
	std::cout << "交换后：x=" << x << ", y=" << y << '\n';
}*/
static int daoxu(int n) {
	int rev = 0;
	while (n != 0) {
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	return rev;
}
static int xinzhengshu(int n) {
	int a = 0;
	while (n != 0) {
		a = a * 10 + (n % 100)/10;
		n = n / 100;
	}
	return a;
}
int main() {
	int a = 10;
	int b = 20;
	int c = add(a, b);
	std::cout << "a + b = " << c << '\n';
	std::cout << "a = " << a << ", b = " << b << '\n';
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << '\n';
	std::cout << "请输入一个三位整数：" << '\n';
	int n;
	std::cin >> n;
	std::cout << "反转后的数字为：" << daoxu(n) << '\n';
	int m;
	std::cout << "请输入一个正整数：" << '\n';
	std::cin >> m;
	std::cout << "新整数为：" << xinzhengshu(m) << '\n';
    /*int score;
	std::cout << "请输入一个整数分数：\n";
	std::cin >> score;
	std::cout << "您输入的分数是：" << score << '\n';
	if (score >= 520) {
		std::cout << "您好" << '\n';
		if (score >= 600) {
			std::cout << "非常好" << '\n';
		}
		else if (score >= 550) {
			std::cout << "很好" << '\n';
		}
		else {
			std::cout << "好" << '\n';
		}
	}
	else if (score >= 350) {
	    std::cout << "一般" << '\n';
	}
	else if (score >= 200) {
		std::cout << "较差" << '\n';
	}
	else {
		std::cout << "差" << '\n';
	}
	int i;
    for (i= 0; i< 10; i++) {
		std::cout << i << '\t';
    }
	std::cout << '\n';
	char ch;
	int j;
	double f;
	for (j = 0, ch = 'A', f = 1.0; j < 101; j++, ch++, f = f + 0.1) {
		std::cout << j << '\t' << ch << '\t' << f << '\n';
	}*/
	system("pause");
	return 0;
}
