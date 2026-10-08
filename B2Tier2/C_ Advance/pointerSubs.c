#include<stdio.h>
#include<stddef.h>
int main(){
    int arr [] = {20,40,8,70,60};
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[4];

    ptrdiff_t res = ptr2 - ptr1;
    printf("%d",res);
}