#include<stdio.h>
// contains header file
#define PI 3.14

#define SQUARE(x) ((x)*(x))
#define Max(a,b) ((a)>(b)?(a):(b))
// macro
int main(){
    float rad = 5;
    float area = PI * rad *rad;
    printf("%f",area);
    int num = 5;
    printf("\n%d",SQUARE(num));
    int a = 70;
    int b = 60;
    printf("\n%d",Max(a,b));
}