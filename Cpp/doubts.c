#include <stdio.h>
#include <math.h>
int main(){
    int a= 10;
    int *p = &a;
    // 1000
    // p->1000 ->memory address
    // *p = memery value = 10
    *p= 200;
    printf("The a value is:%d",a);
    printf("The pointer value:%d",*p);
    printf("The a Address:%p",&a);
    printf("The pointer Address:%p",p);
    float f = 10.0;
    float g= 4.0;
    printf("%f",fmod(f,g));
}