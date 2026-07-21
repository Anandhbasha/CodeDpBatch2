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