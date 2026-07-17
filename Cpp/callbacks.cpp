#include <iostream>
using namespace std;

void calling(){
    cout << "I am calling my Mom";
}
void unlock(){
    cout<<"Unlocked Succesfully"<< endl;
    calling();
}

int main(){
    unlock();
}