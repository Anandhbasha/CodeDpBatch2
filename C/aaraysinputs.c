#include <stdio.h>
int main(){
    int arr[10];
    for(int x=0;x<10;x++){
        printf("Enter the number:");
        scanf("%d",arr[x]);
    }
    
    int len = sizeof(arr)/sizeof(arr[0]);
    // 5 -> 4bytes -> 20bytes
    // 1 ->4 bytes ->20/4 ->5
    for(int x=0;x<len;x++){
        printf("%d",arr[x]);
    }
// arr[0] = 10
// arr[1] =20....
// arr[9] = 30
}