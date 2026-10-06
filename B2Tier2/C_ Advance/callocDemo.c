// Contiguous allocation
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int*)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    for(int x = 0;x<5;x++){
        scanf("%d",&ptr[x]);
    }
    ptr = (int *) realloc(ptr,8* sizeof(int));


    // (datatype *) realloc (ptr,newSize*,sizeofType)

     for(int x = 5;x<8;x++){
        scanf("%d",&ptr[x]);
    }
    for(int x = 0;x<8;x++){
        printf("%d",ptr[x]);
    }
    free(ptr);
}