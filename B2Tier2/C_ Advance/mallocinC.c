#include<stdio.h>
#include<stdlib.h>
int main(){
    int marks[5];
    // Size fixed
    // Rum time we cannot give more than 5 input for array
    // malloc()
    // pointerVariable = (datatype*)malloc(sizeInBytes)
    // int*
    // 5*4 = 20
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("Memeory allocation Failed");
        return 1;
    }
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",ptr[i]);
    }
    free(ptr);
}