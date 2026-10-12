#include <stdio.h>
#include<stdlib.h>

int main(){
    int rows,cols;
    printf("Enter the rows and cols:");
    scanf("%d %d",&rows,&cols);

    if(rows<=0 || cols<=0){
        printf("Invalid Dimension\n");
    }
    int **mat = malloc(rows*sizeof(int*));
    // 3 *4 =12byte

    if(mat==NULL){
        return 1;
    }
    for(int i=0;i<rows;i++){
        mat[i] = malloc(cols * sizeof(int *));
        //col 4 ->4*4 -16 byte
        //
        if(mat[i] ==NULL){
            for(int j=0;j<cols;j++){
                free(mat[j]);
            }
            free(mat);
        }

    }
    for(int x=0;x<rows;x++){
        // row =3
        for(int y=0;y<cols;y++){
            // 3
            printf("Enter the row cols value");
            scanf("%d",&mat[x][y]);
            //[0][0]=10
            //[0][1]=20
            //[0][2]=30
            //[0][3]=40

            //[1][0]=10
            //[1][1]=20
            //[1][2]=30
            //[1][3]=40

            //[2][0]=10
            //[2][1]=20
            //[2][2]=30
            //[2][3]=40

            // 10
            // 0 th row 0th col ->10
            // [
            //  [10,20,30],
            //  [50,60,70],
            //  [70,90,100]
            // ]
            // mat[x]- row
            // mat[y]=> col
        }
    }
    for(int i=0;i<rows;i++){
        for(int x=0;x<cols;x++){
            printf("%d",mat[i][x]);
        }
        printf("\n");
    }
}