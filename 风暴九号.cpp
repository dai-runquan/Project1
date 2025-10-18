#include<iostream>
/*/struct teacher {
	int id = 0;
	std::string name;
	int age = 0;
	struct student stu;
};*/
struct student {
	std::string name;
	int age = 0;
	int score = 0;
};
void printStudent(struct student stu) {
	stu.age += 1; // 测试值传递，函数内修改不影响外部
	std::cout << "姓名：" << stu.name << ", 年龄：" << stu.age << ", 分数：" << stu.score << '\n';
}
void printStudentPtr(const struct student* stu) {
	//stu->age += 1; // 测试指针传递，函数内修改会影响外部
	std::cout << "姓名：" << stu->name << ", 年龄：" << stu->age << ", 分数：" << stu->score << '\n';
}	
int main() {
	/*int a;
	std::cout << "请输入任意个正整数，以-1为结束标志：\n";
	std::cin >> a;
	int sum = 0,i=0;
	while (a != -1) {
		std::cin >> a;
		sum = sum + a;
		i++;
	}
	std::cout << "正整数的和为：" << sum << '\n';
	std::cout << "正整数的平均值为：" << (double)sum / i << '\n';
	std::cout << "100以内满足乘积加9等于和的整数有：\n";
	int n, k = 1, s = 0, m;
	for (n = 1; n <= 100; n++) {
		m = n;
		k = 1;
		s = 0;
		while (m){
			k = k * (m % 10);
			s = s + (m % 10);
			m = m / 10;
		}
		if (k + 9 == s) {
			std::cout << n << " ";
		}
	}
	std::cout << '\n';*/
	struct student stu1;
	stu1.name = "张三";
	stu1.age = 20;
	stu1.score = 90;
	struct student stu2 = { "李四",21,85 };
	std::cout << "姓名：" << stu1.name << ", 年龄：" << stu1.age << ", 分数：" << stu1.score << '\n';
	printf("姓名：%s, 年龄：%d, 分数：%d\n", stu2.name.c_str(), stu2.age, stu2.score);
	printStudent(stu1);
	printStudent(stu2);
	printStudentPtr(&stu1);
	printStudentPtr(&stu2);
	
	/*struct student arr[3] = {
		{"张三",20,90},
		{"李四",21,85},
		{"王五",19,95} 
	};
	arr[0].age = 21;
	for (int i = 0; i < 3; i++) {
		std::cout << "姓名：" << arr[i].name << ", 年龄：" << arr[i].age << ", 分数：" << arr[i].score << '\n';
	}*/
	/*student stu1 = { "张三",20,90 };
	student* p = &stu1;
	p->age = 21;
	std::cout << "姓名：" << p->name << ", 年龄：" << p->age << ", 分数：" << p->score << '\n';*/
	/*teacher tch1;
	tch1.id = 1001;
	tch1.name = "王老师";
	tch1.age = 40;
	tch1.stu.name = "张三";
	tch1.stu.age = 20;
	tch1.stu.score = 90;
	std::cout << "教师编号：" << tch1.id << ", 姓名：" << tch1.name << ", 年龄：" << tch1.age << '\n';
	std::cout << "学生姓名：" << tch1.stu.name << ", 年龄：" << tch1.stu.age << ", 分数：" << tch1.stu.score << '\n';*/
	system("pause");
	return 0;
}