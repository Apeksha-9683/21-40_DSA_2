#include<iostream>
using namespace std;

class P1{
    public:
    void show(int x){
        cout<<"int: "<<x<<endl;
    }

    void show(string str){
        cout<<"stringss: "<<str<<endl;
    }
};

int main(){
    P1 ob1;
    ob1.show("Apeksha");
    ob1.show(97);
    return 0;
}