#include<iostream>
using namespace std;

int main()
{
    double number1, number2;
    cout <<"Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    double sum = number1+number2;
    double difference = number1-number2;
    double product = number1*number2;
    double quotient = number1/number2;
    cout <<"sum=" <<sum<< "\n";
    cout <<"difference=" <<difference<< "\n";
    cout <<"product=" <<product<< "\n";
    cout <<"quotient=" <<quotient<< "\n";
}