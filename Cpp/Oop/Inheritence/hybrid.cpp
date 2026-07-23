// combination of two are more inheritence
#include<iostream>
using namespace std;

// class CodeDp{

// };
// class ITTrainer : public CodeDp{

// };
// class JEEE :public CodeDp{};
// class Students: public ITTrainer{};

// // multilevel ->granpa->dad->son
// // hyrachical-> grandpa->dad
// int main(){     //uncle aunt

// }


// person -> Doctor -> nurse
//          emegency ward

// hybrid -> mutiple and Hyrachical -> unable to use directly

// person -> age ,name ,reason
// Doctor -> Specilation
// nurse -> shift
// Emergency -> doctor+nurse
// virtual

class Patient{
    protected:
    string name;
    int age;
    string reason;
    public:
    void getPatient(){
        cout<<"Enter the Patient Name";
        cin>> name;
        cout<< "Enter the Patient Age:";
        cin>> age;
        cout<< "Enter the Patient reason:";
        cin>>reason;
    }
};
class Doctor : virtual public Patient{
    protected:
    string DocName;
    string specilaization;
    public:
    void getDoctor(){
        cout<<"Enter the Doc name:";
        cin>>DocName;
        cout<<"Enter the Doc Specalization:";
        cin>> specilaization;
    }
};
class Nurse :virtual public Patient{
    protected:
    string nurseName;
    string shift;
    public:
    void getNurse(){
        cout<<"Enter the Nurse name:";
        cin >> nurseName;
        cout<<"Enter the Nurse Shift:";
        cin >> shift;
    }
};

class EmergencyWard: public Doctor,public Nurse{
    public:
    void getDetails(){
        getPatient();
        getDoctor();
        getNurse();
    }
    void display(){
        cout << "\n Emergency Staff Details" << endl;
        cout << "Patient Name:" << name << endl;
        cout << "Patient Age:" << age << endl;
        cout << "Patient Cause:" << reason << endl;
        cout << "Doctor Name:" << DocName << endl;
        cout << "Doctor Spec:" << specilaization << endl;
        cout << "Nurse Name:" << nurseName << endl;
        cout << "Nurse Shift:" << shift << endl;
    }
};

int main(){
    EmergencyWard E =EmergencyWard();
    E.getDetails();
    E.display();
}