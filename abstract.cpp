#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void makepayment(){
        cout<<"making a paymnet "<<endl;

    }
    virtual ~Payment(){}

};
class upipay: public Payment{
    public:
    void makepayment() override{
        cout<<"payment through upi 🏦"<<endl;
    }
};
class creditcard: public Payment{
    public:
    void makepayment() override{
        cout<<"payment through vredit card 💳"<<endl;
    }
};
int main(){
    int choice;
    Payment* payment= nullptr;
    cout<<"choose a payment method:\n";
    cout<<"1.upi\n";
    cout<<"2.credit card\n";
    cout<<"Enter choice: ";
    cin >>choice;
    if (choice == 1){
        payment = new upipay();
    }
    else if (choice == 2){
        payment = new creditcard();
    }
    else{
        cout<<"Invalid choice!"<<endl;
        return 0;

    }
    payment ->makepayment();
    delete payment;
}