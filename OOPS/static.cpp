#include<iostream>
using namespace std;

class Example{
    public:
    static int x;

};

int Example::x=0;

int main(){
    Example a1;
    Example a2;
    cout<<a1.x++<<endl;
    cout<<a2.x++<<endl;

    return 0;}