#include<iostream>
using namespace std;

class Product{
    private:
    string itemName;
    float price;
    int quantity;
    public:
    void addItem(){
        cout << "Enter the Item Name";
        cin >>itemName;
        cout <<"Enter the product Price";
        cin >> price;
        cout<<"Enter the Quantity";
        cin >> quantity;
    }
    float generateBill(){
        return price*quantity;
    }
    
};

int main(){
    int n;
    float high,Amount;
    cout<< "Enter the no of Product";
    cin>>n;
    Product p[n];
    float totalAmount = 0;
    for(int x=0;x<n;x++){
        cout << "Product" <<x+1;
        p[x].addItem();
        totalAmount+=p[x].generateBill(); //100+200+300
        Amount=p[x].generateBill(); //500
        if(Amount>high){
            high = Amount;
        }
    }
    float gst = totalAmount*0.18;
    float finalAmount = totalAmount+ gst;
    cout << "totalAmount:" << totalAmount << endl;
    cout << "Gst:" << gst << endl;
    cout << "finalAmount:" << finalAmount;
    cout<<"Higest Amount is:" << high << endl;


}