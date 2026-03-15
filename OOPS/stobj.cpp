#include<iostream>
using namespace std;

class Example{
    Example(){
        cout<<"constructor...."<<endl;
     }
     ~Example(){
        cout<<"Destrucor...."<<endl;
     }
};

int main(){
    int a = 0;
    if(a == 0){
        Example eq1;

    }
}