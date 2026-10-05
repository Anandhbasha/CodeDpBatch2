#include <stdio.h>
int main(){
    int num = 100;
    int *ptr = &num;
    int **ptr2 = &ptr;
    printf("%d\n",num);
    printf("%d\n",*ptr);
    printf("%d\n",**ptr2);
}