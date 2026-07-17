// while

// variable
// while(condition){
    // code
    // increment/decrement
// }

// do while
// variable
// do{
    //code 
    // increment/decrement
// }while(condition)


// for
// for(variable;condition;increment/decrement){
    // code
// }


#include <iostream>
using namespace std;

int main(){
    int a=1;
    while(a<5){
        cout<<a <<endl;
        a++;
    }
    // 1<5->a=1 =>a++(a=1+1) = 2
    // 2<5->a=2 =>a++(a=2+1) = 3
    // 3<5->a=3 =>a++(a=3+1) = 4
    // 4<5->a=4 =>a++(a=4+1) = 5
}


