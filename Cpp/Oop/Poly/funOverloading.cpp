#include<iostream>
using namespace std;

class Calculator{
    public:
    void add(int a){
        cout<<"The value of add is:" <<a << endl;
    }
    void add(double a,double b){
        cout<<"The value of add is float:" <<a+b << endl;
    }
    void add(int a,int b){
        cout<<"The value of add is Int:" <<a+b << endl;
    }
    void add(int a,double b){
        cout<<"The value of add is Int and float:" <<a+b << endl;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};


int main(){
    Calculator c= Calculator();
    c.add(10);
    c.add(10.5,15.2);
    c.add(10,15);
    c.add(10,15.2);
    cout<<"The value of add is Int Three:"<<c.add(10,15,2) << endl;
}


// class ClassName{
    // void funtionName(a)
    // void funtionName(a,b)
    // void funtionName(a,b,c)
    // void funtionName(a,b,c,d)
    // void funtionName(a,b,c,d,e,f)
// }