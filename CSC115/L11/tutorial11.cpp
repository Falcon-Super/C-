#include <iostream>
using namespace std;

void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;

}


int main() {
    cout << "Enter 5 integers for first array: ";
    const int SIZE = 5;
    int firstArray[SIZE];
    int secondArray[SIZE];
    int sumArray[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (cin >> firstArray[i]) {
            //input worked
        } else {
            //invalid character
            break;
        }



    }
    print_array(firstArray, SIZE);
    cout<<"Enter 5 integers for the second array: ";
    for (int i = 0; i < SIZE; i++) {
        if (cin >> secondArray[i]) {
            //input worked
        } else {
            //invalid character
            break;
        }

    }
    print_array(secondArray, SIZE);
    cout << "Sum of elements of the arrays:" << endl;

    for (int i = 0; i < SIZE; i++) {
        sumArray[i] = firstArray[i] + secondArray[i];
        cout << sumArray[i] << endl;
    }

}