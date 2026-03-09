#include<iostream>
using namespace std;
class animals{
    public:
    virtual void sound(){
        cout<<"Animal makes sound";
    }
};
class Dog: public animals{
    void sound(){
        cout<<"Dogs barks";
    }
};
 int main(){
    animals *a;
    Dog d;
    a= &d;
    a->sound();
 }