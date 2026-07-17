#include<iostream>
using namespace std;
int main(){
    int a = 0;
    while(a<=5){ //2<=5
        a++;       //4
        if(a==3){ //3==3
            continue;
        }      
        cout<<a; //2
        
    }
}