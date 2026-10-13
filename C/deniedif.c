#include <stdio.h>
#define debug
int main(){
    int a = 10;
    int b = 20;
    #ifdef debug
        printf("Debug mode activate");
        printf("\n%d",a);
        printf("\n%d",b);
    #endif
    printf("\nsum=%d",a+b);
}