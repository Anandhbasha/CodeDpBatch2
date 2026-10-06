#include<stdio.h>
#include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr = malloc(100*sizeof(int));
//     // 100 int
//     free(ptr);
//     ptr=NULL;
// }
// alloced memeory address that will loose
// Memory leak

int main(){
    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d",*ptr);
    // dangling pointer
}

// Task


// malloc() – 3 Tasks
// 1. Write a C program to dynamically allocate memory for 5 integers using malloc(), get values from the user, and print all the values.
// 2. Write a C program to dynamically allocate memory for n integers using malloc() and find the sum and average of the numbers.
// 3. Write a C program using malloc() to store n student marks and find the highest and lowest mark.
// calloc() – 3 Tasks
// 1. Write a C program to allocate memory for 5 integers using calloc() and print the values before assigning any data.
// 2. Write a C program using calloc() to store n numbers, get the values from the user, and count how many are even and odd.
// 3. Write a C program using calloc() to store n employee salaries and calculate the total salary and average salary.
// realloc() – 3 Tasks
// 1. Write a C program to initially allocate memory for 5 integers, then use realloc() to increase the size to 10 integers and accept the additional values.
// 2. Write a C program to dynamically store n numbers, then ask the user how many more numbers they want to add and use realloc() to increase the memory size.
// 3. Write a C program to allocate memory for 10 integers, get the values from the user, and then use realloc() to reduce the memory size to 5 integers and display the remaining values.