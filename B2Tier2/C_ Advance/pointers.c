#include<stdio.h>

int main(){
    int balance = 500;
    int addMount= 5000;
    int newBalnce = balance;
    // 10001->500
    // newbalce-X
    newBalnce = 5500;
    printf("%d\n",balance);
    // ptr
    int *p = &balance;
    *p = 6000;
    printf("%d\n",balance);
}