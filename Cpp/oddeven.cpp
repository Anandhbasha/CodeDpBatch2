#include<iostream>
using namespace std;


//condition?"true":"false"
void oddEven(int a){
    cout << (a%2==0?"Even number":"Odd Number");
}
int main(){
    int x;
    cout << "Enter the number to find Odd or Even";
    cin >> x;
    oddEven(x);
}