#include<stdio.h>
void changeValue(int *ptr){
    *ptr = 150;   
}

int main(){
    int num = 10;
    printf("Before value %d\n",num);
    changeValue(&num);
    printf("After changed %d\n",num);
}