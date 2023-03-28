#include<iostream>
using namespace std;

int n;

void star_line(){
    int i;
    cout<<"Please enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++){
       cout<<"*";
    }

}


int main(){
    star_line();
}
