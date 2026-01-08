#include <iostream>
#include <string>
using namespace std;
class Order{
    protected:
        string costumerName;
        int orderID;
        public:
        Order(string name, int id)
            : costumerName(name), orderID(id) {}
            virtual void processorder() = 0;
            virtual ~Order(){}
};
class Onlineorder : public Order{
    string dilivryaddress;
    public:
    Onlineorder(string name, int id, string address) : Order(name,id), dilivryaddress(address){}
    void processorder() override{
        cout<<"processing online order for "<<costumerName<<", order ID:"<<orderID<<", to be delivered at "<<dilivryaddress<<endl;
    }
};
class InStoreorder : public Order{
    string storelocation;
    public:
    InStoreorder(string name, int id, string location): Order(name, id), storelocation(location){}
    void processorder() override{
        cout<<"processing in-store order for "<<costumerName<<",\n order ID:"<<orderID<<", \n to be picked up at "<<storelocation<<endl;
    }
};
int main(){
    Order* order1 = new Onlineorder("harshit", 201, "123 main st");
    Order* order2 = new InStoreorder("rahul", 202, "Downtown Store");
    order1 ->processorder();
    order2 ->processorder();
    delete order1;
    delete order2;
}