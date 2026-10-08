#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    // increment
    // int *p = arr;
    // printf("%d\n",*p);
    // *p++;
    // printf("%d\n",*p);
    // *p++;
    // printf("%d\n",*p);
    // *p++;
    // printf("%d\n",*p);
    // *p++;
    // printf("%d\n",*p);
    // decrement
    int *p = &arr[4];
    for(int i=0;i<5;i++){
        printf("%d\n",*p);
        if(i<4){
            p--;
        }
    }
}