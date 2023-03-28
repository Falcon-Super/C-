#include<iostream>
using namespace std;

struct Student{
    char id[5];
    int age;
    int grade;

}Student;


int main(){
    do{
        cout<<"Enter id: ";
        cin>>Student.id;
        cout<<"Enter age: ";
        cin>>Student.age;
        cout<<"Enter grade: ";
        cin>>Student.grade;
        if(Student.grade<60){
        cout<<"Student failed"<<"\n";
        }
    }
    while(Student.grade>=60);
}