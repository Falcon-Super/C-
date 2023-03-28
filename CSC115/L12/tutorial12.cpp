#include<iostream>
using namespace std;

void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;

}

const int SIZE = 5;
int inputArray[SIZE];
int outputArray[SIZE];

int main() {
    cout << "Enter 5 integers for first array: ";
    for (int i = 0; i < SIZE; i++) {
        if (cin >> inputArray[i]) {
            //input worked
        } else {
            //invalid character
            break;
        }
    };
    print_array(inputArray, SIZE);

    cout<<"Please enter “1” to find the maximum value in the array\n";
    cout<<"Please enter “2” to print the array values in reverse order\n";
    cout<<"Please enter “3” to print the array values in ascending order\n";
    cout<<"Please enter “4” to exit the program\n";
    cout<<"your choice: ";
    int choice;
    cin>>choice;

    if(choice == 1){
        for(int i = 1;i < SIZE; ++i)
        {
            // Change < to > if you want to find the smallest element
            if(inputArray[0] < inputArray[i])
                inputArray[0] = inputArray[i];
        }
        cout << "Largest element = " << inputArray[0];

    }
    if(choice == 2){
        // Copy numbers from inputArray to outputArray in
        // reverse order
        for(int i = 0; i < SIZE; i++){
            outputArray[i] = inputArray[SIZE-i-1];
        }
        // Print Reversed array
        cout << "Reversed Array\n";
        for(int i = 0; i < SIZE; i++){
            cout << outputArray[i] << " ";
        }
    }
    if(choice == 3){
        //Sorting an array in ascending order
        for(int i=0; i<SIZE; i++)
        {
            for(int j=i+1; j<SIZE; j++)
            {
                //If there is a smaller element found on right of the array then swap it.
                if(inputArray[j] < inputArray[i])
                {
                    int temp = inputArray[i];
                    inputArray[i] = inputArray[j];
                    inputArray[j] = temp;
                }
            }
        }
        //Printing the sorted array in ascending order
        cout<<"Elements of array in sorted ascending order:"<<endl;
        for(int i=0; i<SIZE; i++)
        {
            cout<<inputArray[i]<<endl;
        }
    }
    if(choice == 4){
        exit;
    }
}