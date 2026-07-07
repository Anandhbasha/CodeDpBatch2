#include <stdio.h>

// int main(){
//     int a=0;
//     while(a<=5){ //1<5
//         a++;
//         printf("Hello Welcome\n");        
//     }
// }



// a=1
// Hello Welcome
// a=2
// Hello Welcome
// a=3
// Hello Welcome
// a=4
// Hello Welcome
// a=5
// Hello welcome


// #include <stdio.h>
// int main(){
//     int a =1;  
//     while(a<=10){
//         int b =a*3;
//         printf("%d * 3 = %d\n",a,b);
//         a++;
//     }
// }

// 1*3 =% 3
// 2*3 =6

// array
// #include <stdio.h>
// int main(){
//     int arr[] = {10,20,30,40,50,60,70};
//     int a =0;
//     while(a<=6){
//         printf("%d\n",arr[a]);
//         a++;
//     }
//     // printf("%d",arr[0]);
//     // printf("%d",arr[1]);
//     // printf("%d",arr[2]);
//     // printf("%d",arr[3]);
//     // printf("%d",arr[4]);
//     // printf("%d",arr[5]);
//     // printf("%d",arr[6]);
// }


#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    // 10->0
    // 20->1
    // 30->2
    printf("%d",arr[0]);
    printf("%d",arr[1]);
    int a =0;
    while(a<7){
        printf("%d",arr[a]);
        a++;
    }
    int a = 10;
    int array [] = {10,20,30};
    // 10 ->10->0 ->10

    printf("%d",array[0])
}