#include<iostream>  // 包含输入输出流头文件
#include<string>    // 包含字符串处理头文件
int main() {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < 3; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n' << "元素个数为：" << sizeof(arr) / sizeof(arr[0]) << '\n';
	std::cout << "数组首地址为：" << arr <<'\n' << "第一个元素地址为：" << (int)&arr[0] << '\n';
	for (int i = 0; i < 3; i++) {
		std::cout << arr[sizeof(arr) / sizeof(arr[0]) - i-1] << ' ';
	}
	std::cout << '\n';
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < 3; i++) {
		std::cout << arr[i] << ' ';
	}
	int arr1[] = { 6,4,67,8,4,6,99,-12,0,56,34 };
	int length = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr1[j] > arr1[j + 1]) {
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
	std::cout << '\n' << "排序后：" << '\n';
	int arr2[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << arr2[i][j] << ' '; 
		}
		std::cout << '\n';
	}
	std::string name[3] = { "张三","李四","王五" };
	int score[3][3] = { {90,80,70},{60,50,40},{30,20,10} };
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		std::cout << name[i] << "的总分为：" << sum << '\n';
	}
	system("pause");
	return 0;
}