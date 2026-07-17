#include<iostream>
using namespace std;
class Student{
    public:
    string name = "";
    int standard = 12;
    char section = 'A';
    string BloodGroup = "";
    string schoolName = "Abc School";

    string hobbies(string hob){
        // cout <<name<< "Hobbies:" << hob << endl;
        return hob;
    }
    string sports(string sport){
        // cout <<name <<"Sport:" << sport << endl;
        return sport;
    }
};
int main(){
    Student s1 = Student();
    s1.name = "Dharsana";
    s1.BloodGroup = "B+ve";    
    Student s2 = Student();
    s2.name = "Harsha";
    s2.BloodGroup = "0-ve";
    

    cout << s1.name << endl;
    cout << s1.BloodGroup << endl;
    cout << s1.standard << endl;
    cout << s1.section << endl;
    cout << s1.schoolName << endl;
    cout <<s1.name << "Hobbies are:" <<s1.hobbies("Sleeping") << endl;
    cout <<s1.name <<"Liked Sport is:"<<s1.sports("Hockey")<< endl;

    cout << s2.name << endl;
    cout << s2.BloodGroup << endl;
    cout << s2.standard << endl;
    cout << s2.section << endl;
    cout << s2.schoolName << endl;
    cout <<s2.name << "Hobbies are:"<<s1.hobbies("Sleeping") << endl;
    cout <<s2.name <<"Liked Sport is:"<<s1.sports("Hockey")<< endl;
}