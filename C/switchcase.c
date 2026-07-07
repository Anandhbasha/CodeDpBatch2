#include <stdio.h>
int main(){
    char day = 'T';
    switch(day){
        case 'M':
            printf("Today is Monday");
            break;
        case 'T':
            printf("Today is Tuesday");
            break;
        case 'W':
            printf("Today is Wednesday");
            break;
        case 't':
            printf("Today is Thursday");
            break;
        case 'F':
            printf("Today is Friday");
            break;
        case 'S':
            printf("Today is Saturday");
            break;
        default:
            printf("Today is Sunday");
    }
    
    
}

// switch(condition){
//         case "option1":
//             // code excetute
//             // break
//         case "option2":
//             // code excetute
//             // break
//         case "option3":
//             // code excetute
//             // break
//         default:
//             //  code excetute

//     }