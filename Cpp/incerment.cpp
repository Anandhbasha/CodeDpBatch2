#include <iostream>
using namespace std;
int main(){
    int a =5;
    cout << a++ << endl; //6
    // post increment -> a value is print ->5+1 =6
    cout << ++a << endl; //7
    // pre incremnt ->7
    cout << --a << endl; //7
}