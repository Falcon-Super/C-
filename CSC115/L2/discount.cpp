#include <iostream>
using namespace std;
int main()
{ double discount, price;
    cout<<"Enter the price of the item: $";
    cin >> price;
    cout<<"Enter the discount for the this item: %";
    cin>> discount;
    price = price - (price * discount/100);
    cout.setf (ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"\nThe sale price for your item is: $"<< price;
    cout<<endl;
    return 0;
}