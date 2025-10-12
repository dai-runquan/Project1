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
	int n [] = { 12,43,65,34,24,246,75,86,34,23 };
	int sum = 0;
	int length = sizeof(n) / sizeof(n[0]);
	for (int i = 0; i < length - 1 ; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (n[j] > n[j + 1]) {
				int temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	std::cout << "排序后：" << '\n' << n << '\n';
	for (int i = 0; i < length; i++) {
		std::cout << n[i] << ' ';
		sum = sum + i;
	}
	std::cout << "\n" << "sum=" << sum << '\n';
	for (int i = length - 1; i >= 0; i--) {
		std::cout << n[i] << ' ';
	}
	std::cout << '\n';
	int i, j, x, sum1;
	for (i = 0; i < 3; i++) {
		sum1 = 0;
		std::cout << "请输入3个整数：\n";
		for (j = 0; j < 3; j++) {
			if (!(std::cin >> x) or x<0) {  // 如果输入失败（如输入了字母等非数字字符）
				std::cout << "错误：请输入有效的数字\n";  // 输出错误信息
				std::cin.clear(); // 清除输入流的错误状态标志
				std::cin.ignore(10000, '\n'); // 忽略缓冲区中最多10000个字符，直到遇到换行符
				j--;
				continue;  // 跳过本次循环的剩余部分，重新开始循环
			}
			sum1 = sum1 + x;
		}
		std::cout << "第" << i + 1 << "组的和为：" << sum1 << '\n';
	}
    system("pause");
	return 0;
}