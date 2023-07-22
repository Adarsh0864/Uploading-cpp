#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrize[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price of the item " << endl;
    cin >> itemPrize[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The prize of item with ID " << itemID[i] << "is" << itemPrize[i] << endl;
    }
}

int main()
{
    Shop Dukaan;
    Dukaan.setPrice(); // Alt + shift + down for more copy downwards.
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.displayPrice();

    return 0;
}