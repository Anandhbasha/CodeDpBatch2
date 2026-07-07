// if
// if(condition){
//     // code
// }

#include <stdio.h>

int main(){
    int temp =0;
    printf("Enter the room temparature:");
    scanf("%d",&temp);
    if(temp<20){
        printf("Switch off Fan and AC\n");
    }    
    else if(temp>32){
        printf("Switch on the AC");
    }  
    else if(temp>32){
        printf("Switch on the AC");
    }  
    else{
        printf("Switch on the FAN");
    }
    
}