#include<iostream>
using namespace std;

// class ATM{
// public
// virual void getMoney() =0;
// }
// class SBICard:public ATM{
// public:
// void getMoney(){
// }

// }

class Payment{
    public:
    virtual void pay() = 0;
};

class Cash : public Payment{
    public:
    void pay(){
        cout<<"Payment done by Cash" << endl;
    }
};
class Gpay : public Payment{
    public:
    void pay(){
        cout<<"Payment done by Gpay" << endl;
    }
};
class Phonepe : public Payment{
    public:
    void pay(){
        cout<<"Payment done by Phonepe" << endl;
    }
};
int main(){
    Phonepe ph = Phonepe();
    Gpay g = Gpay();
    Cash c = Cash();
    ph.pay();
    c.pay();
    g.pay(); 
}