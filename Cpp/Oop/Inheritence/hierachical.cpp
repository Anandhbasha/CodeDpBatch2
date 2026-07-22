#include <iostream>
using namespace std;

class School{
    protected:
   string schoolName = "xyz";
};
class Teacher:public School{
        public:
        void School(){
            cout<< schoolName << endl;
        }

};
class Students : public School{
    public:
    void showName(){
        cout<< schoolName;
    }
};

int main(){
    Teacher T = Teacher();
    Students s = Students();
    T.School();
    s.showName();
    
}

// Grand parent 
// Dad    Uncle  aunt


// private
// class dad ->private->class property or function
// class child:public dad 
// protected
// class dad ->protected->class property or function
// class child:public dad 
// public
// int main and also use class