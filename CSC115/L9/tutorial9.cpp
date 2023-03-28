#include<iostream>
using namespace std;

class Student{
    private:
	    int id;
        string name;
        int age;
        double gpa;
    public:
        void insert();
        void display();
};

void Student::insert(){
    cout<<"Enter student id: ";
    cin>>id;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter student age: ";
    cin>>age;
    cout<<"Enter student GPA: ";
    cin>>gpa;
}

void Student::display(){
    cout<<"Student id is: "<<id;
    cout<<"\nStudent name is: "<<name;
    cout<<"\nStudent age is: "<<age;
    cout<<"\nStudent GPA is: "<<gpa;
}

int main(){
    Student s;
    s.insert();
    s.display();
}