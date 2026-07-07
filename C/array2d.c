#include <stdio.h>
int main(){
    int arr[5][5] = {{10,20,30,40,50},{60,70,80,90,100}};
    // first square bracket[] -> row ->2
    // second square bracket[] -> col ->0
    printf("The first element of array is : %d\n",arr[0][0]);
    printf("The first element of array is : %d\n",arr[0][1]);
    printf("The first element of array is : %d\n",arr[0][2]);
    printf("The first element of array is : %d\n",arr[0][3]);
    printf("The first element of array is : %d\n",arr[0][4]);
    printf("The first element of array is : %d\n",arr[1][0]);
    printf("The first element of array is : %d\n",arr[1][1]);
    printf("The first element of array is : %d\n",arr[1][2]);
    printf("The first element of array is : %d\n",arr[1][3]);
    printf("The first element of array is : %d\n",arr[1][4]);
    // [0] ->{10,20,30,40,50} [0] ->10
}