#include <iostream>
using namespace std;
int main(){
    int rating;
    int count = 0;
    int sum = 0;

    do{
        cout<<"Enter Rating (1-5) or 0 to Stop";
        if(rating>=1 && rating<=5){
            sum+=rating;
            count++;
        }
    }while(rating!=0);
    cout<<"\n Total Ratings:" << count << endl;
    cout<<"\n Sum of the Ratings:" << sum << endl;
    if(count>0){
        cout << "Avg Rating=" << float(sum)/count << endl;
    }else{
        cout<< "No Ratings Received";
    }
}