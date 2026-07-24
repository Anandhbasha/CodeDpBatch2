#include <iostream>
using namespace std;

class Box{
    protected:
    int value; 
    int x;   
    public:
    void getValue(int v){
        value = v;
        //20
    
    }
    void multi(int a){
        x=a;
    }
    Box operator+(Box b){ //20
        Box temp;
        temp.value = value+b.value;
        return temp;
    }
    Box operator*(Box b){ //20
        Box temp1;
        temp1.x = x*b.x;
        return temp1;
    }
    void display(){
        cout<<"Add:" <<value<< endl;
        
    }
    void showMuliple(){
        cout<<"Multiple:" <<x << endl;
    }
};
int main(){
    Box b1,b2,b3;
    b1.getValue(10);
    b2.getValue(20);
    b3 = b2+b1; //b2+b1 = b2b1->20+10 =30
    cout<<"Sum:";
    b3.display();   
    b1.multi(10);     
    b2.multi(2);  
    b3 = b1*b2; 
    cout<<"\nMultiple:";
    b3.showMuliple();   
}

// 10+20 = 30
// Hello + welcome = HelloWelcome

// box1 ->10
// box1->20
// box1+box2




