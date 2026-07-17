// 1->1
// 0 ->0
// 2->10
// 3->11
// 4->100

// interger ->4
// 4/2->0->2
// remainder ->0
// co->2->2->1
//    100

// 4/2 = 2 remainder =0
// 2/2 = 1 remainder =0
// 1/2 = 1 remainder =1

// 13
// 1101
// 1 -> 1*2^3 = 8
// 1 -> 1*2^2 = 4
// 0 -> 0*2^1 = 0
// 1 -> 1*2^0 = 1
// 13

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int binary, decimal =0,i=0,remainder;
    cout << "Enter the Binary number:";
    cin >> binary;
    // 1101%10->1
    while(binary!=0){
        remainder = binary%10;// remainder = 1// remainder = 0  //remainder =   1  //remainder =   1    
        decimal = decimal+remainder * pow(2,i); 
        // 0       = 0       + 1       * 1 =1
        // 1       = 1      + 0       * 1 =1
        // 1       = 1      + 1       * 2*2 =4 =5
        // 5       = 5      + 1       * 2*3 =4 =13
        binary = binary/10;// 1101/10->110->11->1->0
        i++;
    }
    cout <<"Decimal value is:"<<decimal;
}

// %-> remainder 10% 5 ->0
// 10/5->2
// 1->1*2*3 = 8
// 1 -> 1*2*2 =4
// 0->0*2*1 = 0
// 1->1*2*0 = 1


// BODMAS
// B-> Bracket
// O ->Of
// D >Division
// M-> Multiplication
// A->Addtion
// S->Substraction

// (5+3)*2/5
// 8*10/5
// 8*2
// 16



// 1101
// 1
// 1
// 0
// 1

// 1101%10->remainder ->
// 1101/10->->1->2*0
// 0
// 1
// 1