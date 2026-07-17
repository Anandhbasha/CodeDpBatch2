#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    while(a<=100){
        if(a%3==0){
            cout<< "Third:" << a <<endl;
        }
        a++;
    }
}