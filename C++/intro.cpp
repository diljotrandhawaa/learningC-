#include <iostream>

using namespace std;

int main() {
    int num1 = 1;
    int num2 = 2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "num1 = " << num1 << endl << "num2 = " << num2;
    return 0;
}