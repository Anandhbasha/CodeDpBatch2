#include<stdio.h>
#ifndef Discount
#define Discount 10
#endif
int main(){
    float price = 1000.25;
    float finalPrice = price - (price*Discount/100);
    printf("\nfinalPrice:%f",finalPrice);
}