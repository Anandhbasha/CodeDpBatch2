#include <iostream>
using namespace std;
int main(){
    int password = 1234;
    int gPassword; 
    int attempt = 1;
    while(attempt<=3){
        cout << "Enter the your Password:";
        cin >> gPassword;
        if(password==gPassword){
            cout<<"Login Success"<<endl;
            break;
        }
        else{
            cout<<"Invalid Password"<<endl;
        }
        attempt++;
    }
}