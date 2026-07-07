#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // arr[] -> 1000 ->1000.1 -> 1000.2 -> 1000.3 -> 1000.4 -> 1000.5
    // index 0 ->1
    // index 1->2
    // index 2->3
    // index 3->4
    // index 4->5
    printf("The first element of array is : %d\n",arr[0]);
    printf("The Second element of array is : %d \n",arr[1]);
    printf("The Third element of array is : %d\n",arr[2]);
    printf("The Fourth element of array is : %d\n",arr[3]);
    printf("The Fifth element of array is : %d\n",arr[4]);
    printf("The Fifth element of array is : %d\n",arr[5]);

}