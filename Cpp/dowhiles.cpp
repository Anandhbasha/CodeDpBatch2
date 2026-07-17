// // do while loop
// #include <iostream>
// using namespace std;
// int main(){
//     do{
//         cout << "Do while is working";
//     }while(10>15);
// }


#include<iostream>
using namespace std;
int main(){
    char again;
    do{
        cout<<"Product Added Succesfully" << endl;
        cout<<"Continue Shopping";
        cin>> again;
    }while(again=='Y'|| again=='y');
    cout<<"Checkout";
}