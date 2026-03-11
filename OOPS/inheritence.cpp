#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    string color;

    void eat(){
        cout<<"Eats\n";

    }

    void breathe(){
        cout<<"breathe\n"<<endl;

    }

};

class Fish : protected Animal {
    public:
    int fins;
    void swim(){
        eat();// we can access eat() function here because it is protected in the base class and we are trying to access it from the derived class
        cout<<"Swims in water\n"<<endl;
    }
};

int main(){
    Fish f1;
    f1.fins=5;
    cout<<f1.fins<< endl;
    f1.swim();
    //f1.eat(); - cannot be accessed because it is protected in the base class and we are trying to access it from outside the class

    return 0;
}
