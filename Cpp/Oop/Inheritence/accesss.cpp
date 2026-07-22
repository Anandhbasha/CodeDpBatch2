#include<iostream>
using namespace std;
class Password{
    private:
    string pass = "123456";
    public:
    void changePassword(string newPass,string oldPass){
        if(oldPass==pass && newPass!=pass){
            pass =newPass;
        }
        cout << "New Changed Password is:" << pass;
    }
};

int main(){
    Password p = Password();
    p.changePassword("87567","123456");
}