#include<stdio.h>
int main(){
    FILE *fp = fopen("new.txt","r");
    if(fp==NULL){
        printf("File not found");
    }
    // fseek(fp,3,SEEK_CUR);
    // char ch = fgetc(fp);
    // printf("Character:%c",ch);
    // fclose(fp);
    printf("Initial: %ld\n",ftell(fp));
    fgetc(fp);
    fgetc(fp);
    fgetc(fp);
    printf("After Reading: %ld\n",ftell(fp));
    fseek(fp,7,SEEK_SET);
    printf("After Reading: %ld\n",ftell(fp));
}