// grandParent ->// parent ->// child
#include<iostream>
using namespace std;
class GrandParent{
    public:
    string property = "House";
    string propery1 = "Land";
};
class Dad:public GrandParent{
    public:
    string bike = "RE";
};
class Son :public Dad{

};

int main(){
    Son s = Son();
    cout << s.bike << endl;
    cout << s.property << endl;
    cout << s.propery1 << endl;
}