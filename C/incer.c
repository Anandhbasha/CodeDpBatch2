// ++,--
// a=10
// a++
// a =11
// post increment
// a++
// pre increment
// ++a
#include <stdio.h>
int main(){
    int a =10;
    // printf("%d\n",a++);
    // // a ->a+=1 ->11
    // printf("%d",a);
    printf("%d\n",++a); //11
    printf("%d\n",a++); //12
    printf("%d",--a);
}