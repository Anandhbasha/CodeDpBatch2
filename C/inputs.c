// format specifiers
// %d ->  int
// %f ->float
// %c -> char
// %lf -> double
// varible name -> should start only letter
    // dont use the keyword
    // dont include the space
    // don't use - 
    // use only underScore
    // data type variable name assignmet operator value
    // memory -> address->
    // int a; -> garbage collection ->
    // scanf
    // & address of a

#include <stdio.h>
int main(){    
    // int a,b;
    // printf("Enter the value of A and B:");
    // scanf("%d %d",&a,&b);
    // printf("A=%d,B=%d",a,b);
    float price;
    char ch;
    double salary;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    printf("Enter the price amount:\n");
    scanf("%f",&price);    
    printf("Enter the Salary amount:\n");
    scanf("%lf",&salary);
    printf("The price amount is:%f\n",price);
    printf("The character is:%c\n",ch);
    printf("The Salary is:%lf\n",salary);
}