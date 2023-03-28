#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "Enter a positive integer: ";
    cin>> num1;
    for (int a = 1; a <= num1; a++)
    {
        if (num1 % a == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        cout << "This is a prime number. \n";
    }
    else {
        cout << "This is not a prime number. \n";
    }
}

