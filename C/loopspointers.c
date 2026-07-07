#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int *a = arr;
    // *a =20
    for(int i=0;i<7;i++){
        printf("Using Array Method:%d\n",arr[i]); //arr[1] =20
        printf("Pointers Using:%d\n",*a); //20
        printf("Pointers Using Address:%p\n",a); //20
        *a++;
    }
    // 
}