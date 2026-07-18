#include<iostream>
using namespace std;

class Dad{
    public:
    string property= "House";
};
class Son : public Dad{

};
int main(){
    Son s =Son();
    cout << s.property;
}