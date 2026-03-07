#include<iostream>
using namespace std;

class User{
    private:
    string id;
    string password;
    public:
    string username;

    User(string id){
        this->id=id;
    }

    void setpassword(string pass_word){
        password=pass_word;

    }

    void getpassword(){
        cout<<"Password is: "<< password<<endl;
    }
};