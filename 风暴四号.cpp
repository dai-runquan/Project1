#include<iostream>
#include<windows.h>
#include<ctime>
struct hero {
	std::string name;
	int age;
	std::string gender;
};
void bubbleSort(struct hero arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j].age > arr[j + 1].age) {
				struct hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printHeroes(struct hero arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "姓名：" << arr[i].name << ", 年龄：" << arr[i].age << ", 性别:" << arr[i].gender << '\n';
	}
}
		int main() {
			/*int a = 10;
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
			std::cout << "恭喜你，猜对了！答案就是" << d << '\n';*/
			struct hero arr[5] = {
				{"诸葛亮",35,"男"},
				{"貂蝉",18,"女"},
				{"吕布",30,"男"},
				{"孙尚香",22,"女"},
				{"张飞",28,"男"}
			};
			int size = sizeof(arr) / sizeof(arr[0]);
			for (int i = 0; i < 5; i++) {
				std::cout << "姓名：" << arr[i].name << ", 年龄：" << arr[i].age << ", 性别:" << arr[i].gender << '\n';
			}
			bubbleSort(arr, size);
			printHeroes(arr, size);
			system("pause");
			return 0;
		}

