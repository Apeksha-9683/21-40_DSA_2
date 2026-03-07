#include<iostream>
using namespace std;

class Car{
    string color;
    string name;
    public:
   
   
    Car(string nameValue, string colorValue)
{
    cout<<"Constructor called"<<endl;
    name = nameValue;
    color = colorValue;
}


void start(){
    cout<<"Car has started"<<endl;

}

void stop(){
    cout<<"Car has stopped"<<endl;
}

};

int main(){
    Car c1("Toyota", "Red");
    return 0;
}