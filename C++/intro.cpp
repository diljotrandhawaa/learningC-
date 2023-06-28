#include <iostream>

using namespace std;

int main() {


    // tax amount calculate exercise
    double sales = 95000;
    int stateTax = 4;
    int countyTax = 2;
    
    double totalTaxPaid = sales * (stateTax + countyTax)/100;
    cout << "Total tax to pay is " << totalTaxPaid;
    return 0;
}