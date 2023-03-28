#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of the array \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"array["<<i+1<<"]= ";
        cin>>array[i];
    }
    cout<<"Even numbers in the array are: ";
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0) cout<<"\t"<< array[i];
    }
    cout<<"\n Odd numbers in the array are:";
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0) {
            cout<<" \t"<<array[i]; }
    }
    return 0;
}