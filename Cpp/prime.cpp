#include<iostream>
using namespace std;
int main(){
    int num = 1;
   while(num<=100){
    int count=0; 
    // 1,same number remainder ->0   
    for(int i=1;i<=num;i++){ //3<=3
        if(num%i==0){ //3/3 =0
            count++;//2
        }
    }
    if(count==2){
        cout<< num << "is a Prime Number"<<endl;
    } // 3 is a prime number
    num++; //3
   }
}

// 2,3,5,7,11,13,17,19
// 7    7%i         if
// 1    0           count+1 = 1
// 2    1           x
// 3    1           x
// 4    3           x
// 5    2           x
// 6    1           x
// 7    0           count+1 = 1+1 = 2