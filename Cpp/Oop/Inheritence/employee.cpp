#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    void getName(){
        cout << "Enter the Name";
        cin>>name;
        cout << "Enter the Age";
        cin>>age;
    }
};
class Employee :public Person{
    protected:
    int empId;
    float Salary;
    public:
    void getEmployee(){
        getName();
        cout << "Enter the empId of :"<<name;
        cin>>empId;
        cout << "Enter the Salary" <<name;
        cin>>Salary;
    }
};
class Manager:public Employee{
    private:
    string department;
    public:
    void getManger(){
        getEmployee();
        cout <<"Enter the Department "<< name;
        cin>>department;
    }
    void display(){
        cout<<"Name is"<< name << endl;
        cout<< name<<"age is"<< age << endl;
        cout<< name<<"Employee id is"<< empId << endl;
        cout<< name<<"Employee Salary is"<< Salary << endl;
        cout<< name<<"Department is"<< department << endl;
    }
};

int main(){
    Manager m1 = Manager();
    m1.getManger();
    m1.display();
}