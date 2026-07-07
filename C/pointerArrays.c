#include <stdio.h>
int main(){
    int arr [] ={10,20,30};
    int *x = arr;
    printf("%d\n",*x);
    printf("%p\n",x);
    *x++;
    printf("%d\n",*x);
    printf("%p\n",x);
     *x++;
    printf("%d\n",*x);
    printf("%p\n",x);
}

// 2c
// 3a
// 34