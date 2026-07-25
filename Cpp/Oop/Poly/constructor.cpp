// class Students{
// this is called as Constructor function
//  Students(){}
// };

// Students s = Students()
#include<iostream>
using namespace std;
class Student{
    string name;
    public:
    // constructor function
    Student(){
        cout<<"Enter the Student Name" << endl;
        cin >> name;
        cout<< "Student Admission Completed" << endl;
    }
    void display(){
        cout<<"The Student name is:" << name << endl;
    }
};

int main(){
    Student s[5];
    for(int x=0;x<5;x++){
        s[x].display();
    }
    
}