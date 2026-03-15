#include<iostream>
using namespace std;   

class Rectangle{
    private:
    int length, breadth;
    public:
    void setlength(int l, int b){
        length = l;
        breadth = b;
    }

    void getlength(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }


    int area(){
        return length * breadth;
    }
};

int main(){
    Rectangle r1;
    cout<<"Enter length and breath: ";
    int t,m;
    cin>>t>>m;
    r1.setlength(t,m);
    r1.getlength();
    cout<<" Area : "<<r1.area()<<endl;
    return 0;
}