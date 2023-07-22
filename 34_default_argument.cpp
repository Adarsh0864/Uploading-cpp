#include <iostream>
using namespace std;

float moneyRecieved(int currentMoney, float factor = 1.04) // Here 1.04 is default argument.
{
    return currentMoney * factor;
}
int main()
{
    int money = 100000;
    cout << "If you have " << money << " In your bank account , you will recieve " << moneyRecieved(money) << " rs after 1 year " << endl;
    cout << " For VIP :If you have " << money << " In your bank account , you will recieve " << moneyRecieved(money, 1.1) << " rs after 1 year ";

    return 0;
}