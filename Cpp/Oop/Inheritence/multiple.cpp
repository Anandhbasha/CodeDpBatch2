#include<iostream>
using namespace std;

class Spotify{
    public:
    void playMusic(){
        cout<< "Spotify is used to Play Songs" << endl;
    }
};
class WhatsApp{
    public:
    void share(){
        cout<<"This Completely sharing app " << endl;
    }
};
class Phone{
    public:
    void call(){
        cout << "Calling Purpose" << endl;
    }
};
class SmartPhone : public Spotify,public WhatsApp,public Phone{

};

int main(){
    SmartPhone S = SmartPhone();
    S.call();
    S.playMusic();
    S.share();
}

// Parent->
// Parent=>Child
// parent ->
 
// smartphone->whatsApp instagram youtube linkedin facebook


// class Parent1{}
// class Parent2{}
// class son: public Parent1,public Parent2{}
