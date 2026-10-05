#include<stdio.h>

int main(){
    int nums [] = {20,40,60,80,100,120};
    int *pt = nums;
    for(int i=0;i<6;i++){
        printf("%d\n",*(pt+i));
        // pt->1000+1 ->1001->20
        // 1000+2->1002->40
    }
}