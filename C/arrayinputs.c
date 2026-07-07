#include <stdio.h>

int main(){
    // int arr[5];
    // int a =0;
    // int x =0;
    // while (a<5)
    //    {
    //     printf("Enter the value of Array:");
    //     scanf("%d",&arr[a]);
    //     // arr[0] = 10
    //     // arr[1] = 20
    //     // arr[2] = 30
    //     // arr[3] = 40
    //     // arr[4] = 50
    //     a++;
    // }   
    // while(x<5)
    // {
    //     printf("%d\n",arr[x]);
    //     // arr[0]->10
    //     // arr[1]->20
    //     // arr[2]->30
    //     // arr[3]->40
    //     // arr[4]->50
    //     x++;
    // }

    int arr [] = {10,20,30,40,50,60,70,80,90,100};
    int a =0;
    int size = sizeof(arr);
    // 10*4 = 40-> bytes ->int capacity of storage is 4bytes 
    int element = sizeof(arr[0]);
    // 4 byte
    int length = size/element;
    // 40/4 ->10
    while(a<length){
        printf("%d\n",arr[a]);
        a++;
    }
    
}


