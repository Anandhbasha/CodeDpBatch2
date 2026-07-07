#include <stdio.h>
void show(int num){
    num = 200;
    printf("Show function Output is:%d\n",num);
}
int main(){
    int a = 50;
    show(a);
    printf("After the function called a value is:%d",a);
}