//competitive code
#include<iostream>
using namespace std;

void oddoreven(int num){
    if(!(num&1)){
        cout<<"Even"<<endl;}
    else{
        cout<<"ODD"<<endl;
    }
}

int main(){
    oddoreven(110);
    oddoreven(1111);
    return 0;
}
