#include<iostream>
using namespace std;

int setithbit(int num, int i){
    return num|(1<<i);

}

int main(){
    cout<<setithbit(6,3);
    return 0;
}