#include"swap.h"
void swap(int x, int y) {
std::cout << "交换前：x=" << x << ", y=" << y << '\n';
int temp = x;
x = y;           
y = temp;
std::cout << "交换后：x=" << x << ", y=" << y << '\n';
}