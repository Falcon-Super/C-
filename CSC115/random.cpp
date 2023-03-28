#include <iostream>
 using namespace std;
int numbers[5];
void input()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the value of input: "; cin>>numbers[i];
    }
}
void output() {
    for (int i = 0; i < 5; i++) {
        cout << "The entered values is : " << numbers[i] << endl;
    }

}
int max()
{
    int max=numbers[0]; for(int i=0; i<4; i++) {
        if(max<numbers[i+1]) max=numbers[i+1];
    }
    return max;
}
int min()
{
    int min=numbers[0];
    for ( int i=0; i<4; i++) {
        if ( min>numbers[i+1]) min=numbers[i+1];
    }
    return min;
}
int main()
{ input();
    output();
    cout<<"The maximum value is "<<max()<<endl; cout<<"The minimum value is "<<min();
    return 0;
}