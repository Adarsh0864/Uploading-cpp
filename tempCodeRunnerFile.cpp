
#include <iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < years; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show() {
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years << " years is " << returnValue << endl;
}

int main() {
    int p, y, r;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the number of years: ";
    cin >> y;
    cout << "Enter the interest rate (in percentage): ";
    cin >> r;
    BankDeposit bd1(p, y, r);
    bd1.show();
    return 0;
}