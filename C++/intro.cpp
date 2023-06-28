#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1. tax amount calculate exercise --->
        // double sales = 95000;
        // int stateTax = 4;
        // int countyTax = 2;
        
        // double totalTaxPaid = sales * (stateTax + countyTax)/100;
        // cout << "Total tax to pay is " << totalTaxPaid;


    // 2. converting fahrenheit to celcius --->

        // cout << "Enter the temperature in F: ";
        // double temp;
        // cin >> temp;

        // int tempInCelcius = (temp - 32) / 1.8;

        // cout << "The temperature is " << tempInCelcius << " degree celcius";



    // 3. Calculating Area of Circle --->

    cout << "Enter the radius of the circle in cm: ";
    double radiusEntered;
    cin >> radiusEntered;

    double areaOfCircle = 3.14 * pow(radiusEntered, 2);
    cout << "The Area of the Circle is " << areaOfCircle << " cubic centimeters";




    // basic calculator
    // cout << "Enter first value: ";
    // int value1;
    // (cin >> value1).get();

    // cout << "Enter the operation type: ";
    // char operationType;
    // cin >> operationType;

    // cout << "Enter second value: ";
    // int value2;
    // (cin >> value2).get();

    // cout << "sum of two values is " << value1 + value2;

    // int num1 = 2;
    // int num2 = 5;
    // char oprt = '+';

    // cout << int(oprt);
    // cout << num1 << int(oprt) << num2;

    return 0;
}