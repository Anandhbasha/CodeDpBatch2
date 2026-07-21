// class Parent{
    // data
// }
// class Child:public parent{
// extra data
// }
#include <iostream>
using namespace std;
class School{
    protected:
    string SchoolName = "Abc International School";
    int standard = 12;
    char section = 'A';
};
class Student:public School{
    public:
    int id;
    string studentName;
    void show(){
        cout << studentName<<"School Name is:" <<SchoolName << endl;
        cout <<studentName<< "Student standard is:" <<standard << endl;
        cout << studentName<<"Student section is:" <<section << endl;
        cout << studentName<<"Student id is:" <<id << endl;
    }
};

int main(){
    Student s1[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the Id for Student";
        cin>>s1[i].id;
        cout<<"Enter the Name of the Student";
        cin>>s1[i].studentName;
        s1[i].show();
    }
}
