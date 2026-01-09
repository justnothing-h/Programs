#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal makes sound"<<endl;
    }
    virtual ~Animal(){}
};
class Dog: public Animal{
    public:
    void sound() override{
        cout<< "Dog barks 🐶"<<endl;
    }
};
class Cat : public Animal{
    public:
    void sound() override{
        cout<<"Cat meows 🐱"<<endl;
    }
};
int main(){
    int choice,times;
    Animal* animal = nullptr;
    cout<<"chosse an animal:\n";
    cout<<"1.Dog\n";
    cout<<"2.Cat\n";
    cout<<"Enter choice: ";
    cin>>choice;
    cout<<"How many times should the animal sound? ";
    cin>>times;
    if (choice== 1){
        animal = new Dog();
    }
    else if (choice==2){
        animal = new Cat();
    }
    else{
        cout<<"Invalid choice!"<<endl;
        return 0;
    }
    for (int i=0; i<times; i++){
        animal ->sound();
    }
    delete animal;
    return 0;
}