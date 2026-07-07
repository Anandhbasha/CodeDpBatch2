#include <stdio.h>
int main(){
    char str[] = "Hello";
    // Hello\0
    char *p = str;
    // while(*p!='\0'){
    //     printf("%c\n",*p);
    //     *p++;
    // }
    for(int x=0;*p!='\0';x++){
        printf("%c\n",*p);
        *p++;
    }
}