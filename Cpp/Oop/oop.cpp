#include<iostream>
using namespace std;
class Cars{
    public:
    string brandName = "suzuki";
    string car_name = "swift";
    string carColor = "red";
    int noofWheesl = 4;
    int noofAirbags = 5;
    int carMilage = 20;
    void acc1(){
        cout <<carColor << "color"<<car_name << "Moves" <<endl;
    }
    void brake1(){
        cout <<carColor << "color"<<car_name <<" Stops" <<endl;
    }
};
int main(){
    Cars c1 = Cars();
    cout << "Carcolor is:" <<c1.carColor << endl;
    c1.carColor = "grey";
    cout << "Car Name is:" <<c1.car_name << endl;
    cout << "BrandName is:" <<c1.brandName << endl;
    cout << "Carcolor is:" <<c1.carColor << endl;
    cout << "noofWheesl is:" <<c1.noofWheesl << endl;
    cout << "noofAirbags is:" <<c1.noofAirbags << endl;
    cout << "carMilage is:" <<c1.carMilage << endl;
    c1.acc1();
    c1.brake1();
    Cars c2 = Cars();
    c2.carMilage = 18;
    c2.carColor = "white";
    c2.noofAirbags = 4;
    cout << "Car Name is:" <<c2.car_name << endl;
    cout << "BrandName is:" <<c2.brandName << endl;
    cout << "Carcolor is:" <<c2.carColor << endl;
    cout << "noofWheesl is:" <<c2.noofWheesl << endl;
    cout << "noofAirbags is:" <<c2.noofAirbags << endl;
    cout << "carMilage is:" <<c2.carMilage << endl;
    c2.acc1();
    c2.brake1();
    cout<< "\n Car Color:" <<c1.carColor;
}

// class 
// object or instense