#include <iostream>                // 引入输入输出流库，用于控制台输入输出
#include <vector>                  // 引入 vector 容器库，用于存储整数序列
#include <algorithm>               // 引入算法库，包含 max_element 等算法
#include <limits>                  // 引入数值极限库，用于获取 int 类型的最小值
#include <stdexcept>              // 引入异常处理库，用于抛出和捕获异常
#include <string>                 // 引入字符串库，用于字符串操作
static int inputPositiveInt(const std::string& prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        if ((std::cin >> value) && value > 0) {
            return value;
        }
        std::cout << "输入无效，必须为正整数，请重新输入：" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
static int findMax(const std::vector<int>& a) {
    if (a.empty()) {               // 判断数组是否为空
        throw std::invalid_argument("Array is empty."); // 空数组时抛出异常
    }
    return *std::max_element(a.begin(), a.end()); // 返回数组中的最大值
}
static std::vector<int> inputIntegers(int n) {
    std::vector<int> a;           // 定义整数向量 a，用于存储用户输入的整数
    for (int i = 0; i < n; ++i) { // 循环 n 次，输入每个正整数
        a.push_back(inputPositiveInt("请输入第 " + std::to_string(i + 1) + " 个正整数：")); // 提示用户输入第 i+1 个正整数
    }
    return a;                    // 返回输入的正整数序列
}

int main() {
    int n = inputPositiveInt("请输入正整数的数量："); // 提示用户输入数量并确保输入合法
    std::vector<int> a = inputIntegers(n); // 调用 inputIntegers 函数，输入正整数序列

    try {
        int maxValue = findMax(a); // 调用 findMax 函数，查找最大值
        std::cout << "最大值为：" << maxValue << std::endl; // 输出最大值
    } catch (const std::invalid_argument& e) { // 捕获异常（如数组为空）
        std::cout << "错误：" << e.what() << std::endl; // 输出异常信息
        return 1;                  // 程序异常退出
    }
    return 0;                      // 程序正常结束
}