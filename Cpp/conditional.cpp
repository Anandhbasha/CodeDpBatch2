#include<iostream>
using namespace std;
int main(){
    bool tap = false;

    // if(tap){
    //     cout<< "Water is filling";
    // }

    // if(tap){
    //     cout << "Water is filling";
    // }
    // else{
    //     cout<<"Tap is on Off Position";
    // }
int age;
cout << "Enter the Age:";
cin >> age;

if(age<13){
    cout<<"The person is kid";
}
else if(age>19 && age<60){
    cout<<"The person is Adult";
}
else if(age>=60){
    cout<<"The person is Senior Citizen";
}
else{
    cout << "The person is Teenager";
}

}

// if
// if(condtion){
    // code
// }


// if(condition){
    // code
// }else{
    // code
// }