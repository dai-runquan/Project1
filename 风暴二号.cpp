#include<iostream>
int main() {
	int score;
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
	}
	system("pause");
	return 0;
}
