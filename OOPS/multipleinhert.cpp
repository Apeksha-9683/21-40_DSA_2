#include<iostream>  
using namespace std;

class A{
    public:
    void display(){
        cout<<"Base class A"<<endl;
    }

};

class B{
    public:
    void dispplay(){
        cout<<"Base class B"<<endl;
    }
};

class C : public A, public B{
    public:
    void disppplay(){
        cout<<"Derived class C"<<endl;
    }
};

int main(){
    C c1;
    c1.display();
    c1.disppplay();
    c1.dispplay();
    return 0;

}