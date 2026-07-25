#include <iostream>
using namespace std;

class Marks{
    public:
    int Mark;

    Marks(int M=0){ //M=10
        Mark = M; //Mark = 10
    }

    Marks operator+(Marks m){
        return Marks(Mark+m.Mark);
    }//s1.mark 10 s2.mark = 20 ->30
    void display(){
        cout<< "Total Marks =" << Mark << endl;
    }
};
int main(){
    Marks s1(10);
    Marks s2(20);
    Marks s3(30);
    Marks s4(40);
    Marks total = 0;
    total = s1+s2+s3+s4;//30+70; ->100
    total.display();
}
