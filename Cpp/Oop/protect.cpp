#include <iostream>
using namespace std;

// protected
// class Parent
    // protect
// class son :public Parent


// int main(){

// }
class School{
    protected:
    string schoolName = "Abc School";
};
class Student : public School{
    public:
    string showSchoolName(){
        return schoolName;
    }
};

int main(){
    Student s1 = Student();
    cout<< s1.showSchoolName();
}










