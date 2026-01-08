#include<iostream>
using namespace std;
class animal{
    public:
            virtual void sound(){
                cout<<"enter what is the sound of dog\n";
            }
};
class dog : public animal{
    public:
    void sound() override{
        cout <<" dog bark \n";
    }
};
class cat : public animal {
    public:
    void sound() override{
        cout << "cat meows \n";

    }
};
int main(){
    animal* a1;
    animal* a2;
    dog d1;
    cat c1;
    a1 = &d1;
    a2= &c1;
    a1 -> sound();
    a2 -> sound();
    return 0;

}