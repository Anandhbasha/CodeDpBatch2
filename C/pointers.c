#include <stdio.h>
int main(){
    int a= 20;// =>1000 ->20
    int *b = &a; //->20
    *b = 70;
    printf("%p\n",b);
    printf("%d\n",*b);
    printf("%d\n",a);
    printf("%p",&a);
}

// a varibale
// 20 value
// 00000044d9bffda4 address

// int *b = &a;

// a = 20
// b = 00000044d9bffda4 ->200
// *b = 20