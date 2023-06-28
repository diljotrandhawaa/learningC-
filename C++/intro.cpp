#include <iostream>

int main() {
    int num1 = 1;
    int num2 = 2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << num1;
    return 0;
}