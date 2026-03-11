#include<iostream>
#include<string>
using namespace std;

class Animal{
 public:
    void eat(){
        cout<<"Eat";}
    void breathe(){
        cout<<"Breathe";

    }
};

class Bird : public Animal {
    public:
    void fly(){
        cout<<"Fly";}
    
    
    
};

class Fish : public Animal{
    public:
    void swim(){
        cout<<"swim";
    }
};

class Mammal : public Animal{
    public:
    void walk(){
        cout<<"walk";

    }
};

int main(){
    Bird b1;
    Fish f1;
    Mammal m1;
    
    b1.eat();
    f1.eat();
    m1.eat();
return 0;}
