#include <stdio.h>
#include <string.h>
int main(){
    // char name []= "Ajay";
    // printf("%s",name);
    // printf("%c",name);

    // char name[20];
    // char nameCopy[20];
    // printf("Enter the name:");
    // // scanf("%s",name);
    // fgets(name,sizeof(name),stdin);
    // printf("The userName is %s\n",name);
    // int len = strlen(name); 
    // for(int i=0;i<len;i++){
    //     printf("%c\n",name[i]);
    // }
    // strcpy(nameCopy,name);
    // printf("The copy name is:%s",nameCopy);
    // \0
    char first[]= "Anandha Kumar";
    // char last[] = "Anandha Kumar";
    // // strcat(first,last);
    // // printf("The name is:%s\n",first);
    // int res = strcmp(first,last);
    // printf("%d",res);
    // strrev(first);
    // strupr(first);
    // printf("%s\n",first);
    // strlwr(first);
    // printf("%s\n",first);
    // printf("Acc:%s",strchr(first,'d'));
    // char strs []= "Apple,Banana,Kiwi"; 
    // char *to = strtok(strs,",");
    // while(to!=NULL){
    //     printf("%s\n",to);
    //     to = strtok(NULL,",");
    // // }
    // char str[] ="Banana";
    // int i = 0;
    // while(str[i]!='\0'){
    //     if(str[i]=='a'){
    //         str[i]="'*";
    //     }
    //     i++;
    // }
    // printf("%s",str);
    char strs[] = "Apple,banana,kiwi"; 
    char *to = strtok(strs,",");     
    while(to!=NULL){ 
        printf("%s\n",to); 
        to = strtok(NULL,","); 
    }
    char strs1[] = "test,work,sad"; 
    char *to1 = strtok(strs1,","); 
    // while(to1!=NULL){ 
    //     printf("%s\n",to1); 
    //     to1 = strtok(NULL,","); 
    // }
}

// 0 A
// 1 p
// 2 p
// 3 l
// 4 e
// 5 ,->\0
// 6 B
// 7 a
// 8 n
// 9 a
// 10 n
// 11 a
// 12 ,->\0
// 13 K
// 14 i
// 15 w
// 16 i
// 17 \0

// char *to = strtok(strs,",");
// strtok ->,->\0
// Apple\0Banana\0Kiwi\0 Apple Banana Kiwi\0
// \0 -> NULL
// to = Apple
// while(to!=NULL){
//         printf("%s\n",to);
//         to = strtok(NULL,",");
//     }

// to -> Apple
// to = Banana