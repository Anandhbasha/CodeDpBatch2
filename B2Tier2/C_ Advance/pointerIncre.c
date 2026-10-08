#include<stdio.h>
int main(){
    int arr[] = {10,20,30};
    int *ptr = arr;
    // 10 ->add
    // 10++ = 11
    (*ptr)++;
    // *ptr++
    printf("%d\n",*ptr);
    *ptr++;
    // address add
    printf("%d",*ptr);
}


// Write a C program to print all 10 elements of an array using pointer increment without array indexing inside the loop.
// Write a C program to display an array in reverse order using pointer decrement.
// Write a C program to find the sum of all array elements using pointer arithmetic.
// Write a C program to calculate the distance between the first and last elements of an array using pointer subtraction.
// Write a C program to swap the first and last array elements using pointers.