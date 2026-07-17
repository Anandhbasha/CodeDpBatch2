#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a=10;
    int b=5;
    float x =10.5;
    cout <<"Addition value is:" << a+b <<endl;
    cout <<"Substraction value is:" << a-b <<endl;
    cout <<"Multiple value is:" << a*b <<endl;
    cout <<"Division value is:" << a/b <<endl; // 4/2-> 2
    cout <<"Modulus value is:" << a%b <<'\n'; //5/2 ->1
    cout <<"Modulus value is:" << fmod(x,b) <<endl; //5/2 ->1
    cout <<"Division value is:" << x/b <<endl; 
}