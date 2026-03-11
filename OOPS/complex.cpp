#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout<<real<<" * "<<img<<"i\n";
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.showNum();
    c2.showNum();
return 0;}
   
