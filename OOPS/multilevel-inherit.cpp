#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eat";
    }

    void breathe(){
        cout<<"Breathe";
    }
};

class Mammal : public Animal{
    public:

    string bloodType;
    Mammal(){
    bloodType = "warm";}

    
};

class Dog :  public Mammal{
    public:
    void tailwag(){
        cout<<"Tail wag";
    }
};

int main(){
    Dog d1;
    d1.eat();
    
}