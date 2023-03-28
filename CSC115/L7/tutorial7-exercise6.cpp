#include<iostream>
using namespace std;

void star_square() {
    int size;
    cout << "Please enter a number: ";
    cin >> size;
    for (int row = 1; row <= size; ++row)
    {
        for (int col = 1; col <= size; ++col)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    star_square();
}
