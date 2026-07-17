#include<iostream>
using namespace std;
int main(){
    // for(variable;condition;increment/decrement){
    // code
    // }
    // int x=0;
    // for(;x<5;x++){
    //     cout << "hello Welcome"<<endl;
    // }
    // int token = 1;
    // for(;token<=25;token++){
    //     cout<< "Calling Token number" << token << endl;
    // }
    int notes;
    cout<<"Enter the number of 500 Notes:";
    cin >> notes;
    cout <<"\n Dispensing Cash...\n";
    for(int i=1;i<=notes;i++){
        cout<<"Dispensing 500 rupee note"<<i<< endl;
    }
    cout <<"Total amount=" <<notes*500;
}