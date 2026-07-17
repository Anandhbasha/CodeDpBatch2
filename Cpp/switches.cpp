#include <iostream>
using namespace std;

int main(){
    int time;
    cout<< "Please enter the time 1 or 2 or 3:";
    cin>>time;
    switch(time){
        case 1:
            cout<<"They choose 1PM" <<endl;
            break;
        case 2:
             cout<<"They choose 2PM"<< endl;
             break;
        case 3:
             cout<<"They choose 3PM" << endl;
             break;
        default:
             cout<<"They choose 6PM";
    }

}

// switch
// switch(expression){
    // case 1Expression:
        // code;
    // case 2Expression:
        // code;
    // case 3Expression:
        // code;
    // default:
        // code
// }