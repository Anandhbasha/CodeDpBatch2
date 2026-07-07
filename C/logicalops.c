#include <stdio.h>
int main(){
    // logical
    // and && or || not !
    int temp = 32;
    printf("%d\n",temp>30 && temp==32 && temp!=31 && temp<=32);
    printf("%d\n",temp>30 || temp==22 || temp!=32 || temp<32);
    printf("%d",!(temp>33 && temp==32));
    // 32>33 ->0 && 1 ->0
}