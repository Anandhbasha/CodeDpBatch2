#include<iostream>
using namespace std;

class Theatre{
    public:
    Theatre(){
        cout<<"Show Starts" << endl;
    }
    ~Theatre(){
        cout<<"Show Ends clean the Screen" << endl;
    }
    void watchMovie(){
        cout<<"Watching Movie" << endl;
    }
};
int main(){
    Theatre s1 = Theatre();
    s1.watchMovie();
}