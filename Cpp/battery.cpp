#include <iostream>
using namespace std;
int main(){
    int battery;
    cout << "Enter the Current Battery Percentage";
    cin >> battery;
    while(battery<100){
        battery+=10;
        if(battery>100){
            battery=100;
        }
        cout<<"Battery:" << battery << "%" << endl;
        
    }
    cout<< "battery Fully Charged";
}