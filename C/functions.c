#include <stdio.h>

// with parameter
// datatype functionname(parameters){
// body
// }
// without parameter
// datatype functionname(){
// body
// }
int greet(){
    printf("My name is Anandh\n");
}
int add(){
    int a =10;
    int b =20;
    printf("The addition value is %d\n",a+b);
}
int main(){
    greet();
    add();
    add();
    add();
}