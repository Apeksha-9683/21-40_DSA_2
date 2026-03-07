// num=7, i=2, val=0;
#include<iostream>
using namespace std;

int updat(int num, int i){
    int t=~((1<<i));
    return num&t;
    }

    int main(){
        cout<<updat(7,2);
        return 0;
    }