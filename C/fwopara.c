#include <stdio.h>

int greet(int a){
    printf("The value is a:%d\n",a);
}
int main(){
    greet(10);
    greet(20);
    greet(30);
    greet(40);
    greet(50);
}