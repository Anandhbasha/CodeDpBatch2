#include <iostream>
using namespace std;

int main(){
    int age =20;
    cout << (age>=18 && age<=60 && age<=25) << endl;
    //1,1 ->1   0,1->0  0,0->0
    cout << (age>=18 || age>=60 || age>=25) << endl;
    //1,1 ->1   0,1->0  0,0->0
    cout << !(age>=18) <<endl;
}