// private
// protected
// public

// class className{
    // code
    // private:
    // int a ;
// };

// scope of varaible

// int main(){
// instance s
// s.a = 30;
// }

#include <iostream>
using namespace std;
class BankAccount{
    private:
    double balance = 500;
    public:
    void deposit(double amount){
        balance += amount;
        // balance = balance+amount
    }
    void withdrawl(double amount){
        balance -= amount;
        // balance = balance-amount
    }
    double showBalance(){
        return balance;
    }
};

int main(){
    // instence or object
    BankAccount acc1 = BankAccount();
    cout <<"The account Balance is:" << acc1.showBalance() << endl;
    acc1.deposit(5000);
    cout <<"The account Balance is After Deposit:" << acc1.showBalance() << endl;
    acc1.withdrawl(1000);
    cout <<"The account Balance is After withdraw:" << acc1.showBalance() << endl;
}