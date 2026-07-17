#include<iostream>
using namespace std;

float avg(int total){
    float average = total/3;
    return average;
}

int total(int a,int b ,int c){
    int tot = a+b+c;
    int y = avg(tot);
    return y;
}

int main(){
    float average_mark = total(60,70,91);
    cout << "The student Average is :"<<average_mark;
}