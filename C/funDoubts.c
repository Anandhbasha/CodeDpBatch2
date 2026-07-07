#include <stdio.h>

void delivery(){
    printf("Our delivery partner is on the way");
}
void preparing(){
    printf("Your order is out for delivery");
    delivery();
}
void placeOrder(){
    printf("Your order is preparing");
    preparing()
}

int main(){
    placeOrder();
}