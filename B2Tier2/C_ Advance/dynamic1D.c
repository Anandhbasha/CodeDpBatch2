#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid size\n");
        return 1;
    }
    else{
        int *arr = malloc(n*sizeof(int));

        if(arr==NULL){
            printf("Memory allocation failed");
            return 1;
        }
        for(int x=0;x<n;x++){
            printf("Enter the element:%d",x);
            scanf("%d",&arr[x]);
        }

        printf("Array Elements");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n",arr[i]);
        }
        
    }
}