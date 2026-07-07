#include <stdio.h>
int main(){
    printf("Hello Welcome to C Program\n");
    // escape key = \n -> move to new line
    int a = 20;  
    float weight = 72.5;
    double pi = 3.14159265323;
    char ch = 'A';
    printf("The a value is:%d\n",a);
    printf("The person weight is: %.2f \n",weight);
    printf("The Pi value is: %lf \n",pi);
    printf("The student grade is %c",ch);
}

// memory
// int -> 4byte -214 483 648 to 214 483 648
// float -> 4byte ->-3.4E-38 to 3.4E-38 
// double -> 8byte -> -1.7E-38 to  1.7E-38
// char -> 1byte
// E = *10 power
// Exponent