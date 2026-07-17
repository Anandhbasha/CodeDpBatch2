#include<iostream>
using namespace std;
int main(){
    char addNotes;
    int amount,total=0;
    do{
        cout<<"Deposit Amount";
        cin >>amount;
        total+=amount;
        cout<<"Deposit Again";
        cin>>addNotes;
    }while(addNotes=='Y'||addNotes=='y');
    cout<<"Final Added Amount="<< total;

}