#include <iostream>
using namespace std;

class Student{
    private:
    int total=0;
    public:
    void addTotal(int s1,int s2,int s3,int s4,int s5){
        if(s1<=100 && s2<=100 && s3<=100 && s4<=100 && s5<=100){
            total +=s1+s2+s3+s4+s5;
        }
        
    }
    int getTotal(){
        return total;
    }
};
int main(){
    Student s1 = Student();
    Student s2 = Student();
    s1.addTotal(55,77,82,91,95);
    s2.addTotal(89,71,82,91,115);
    cout<< "Student 1 Total Marks:" << s1.getTotal() <<endl;
    cout<< "Student 2 Total Marks:" << s2.getTotal() <<endl;
}