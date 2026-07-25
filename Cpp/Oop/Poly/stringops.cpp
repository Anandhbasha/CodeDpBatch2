#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string name = "Joseph Vijay CM";
    // cout<< "Enter the Name:";
    // getline(cin,name);
    // cout<<name <<endl;
    // cout<<name.length() << endl; 
    // cout<<name.size() << endl; 
    // cout<<name.at(2) << endl; 
    // string name1 = "Ajith Kumar";
    // cout<<name.compare(name1) << endl;
    // name.append(" C") ;
    // cout<<name << endl;
    // name.insert(0,"CM ");
    // cout<<name << endl;
    name.erase(7);
    cout<<name << endl;
    // name.replace(0,2,"Maanbumigu");
    // cout<< name<< endl;
    // // reverse(name.begin(),name.end());
    // // cout<< name;
    // name.swap(name1);
    // cout<< name << endl;
    // cout<< name1;
    // transform(name.begin(),name.end(),name.begin(),::toupper);
    // transform(name.begin(),name.end(),name.begin(),::tolower);
    // cout<< name;
    name.erase(remove(name.begin(),name.end(),'J'),name.end());
    cout<<name << endl;
    cout<<name.substr(0,3);

}

// length()
// size()
// name[0]->name.at(0)
// name[0] = "K"
// compare
// append
// insert
// erase
// Replace
// substring
// find
// empty
// clear()
// reverse
// begin()
// end()
// sort()
// covert to UpperCase or lowercase
// swap
// 