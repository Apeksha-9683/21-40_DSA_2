#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
    int salary;
    string subject;
};

class Student{
    public:
    int rollNo;
    float marks;
};

class TA : public Teacher, public Student{
    public:
    string name;
};

int main(){
    TA t1;
    t1.name = "John";;
    t1.salary = 90;
    t1.subject = "CP";
    cout<<t1.name << " got salary of "<<t1.salary;
    return 0;

}