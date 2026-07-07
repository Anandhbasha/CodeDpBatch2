#include <stdio.h>
float avg (float tot){
    float x = tot/5;
    printf("The avg is %f",x);
}
int total(int t,int e,int m,int s,int ss){
    int tot = t+e+m+s+ss;
    avg(tot);
    
}
int main(){
    printf("%d",total(60,70,80,90,70));
}