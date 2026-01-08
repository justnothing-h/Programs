#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    virtual ~Animal() {}   // virtual destructor
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks 🐶" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows 🐱" << endl;
    }
};

int main() {
    int choice, times;
    Animal* animal ;

    cout << "Choose an animal:\n";
    cout << "1. Dog\n";
    cout << "2. Cat\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "How many times should the animal sound? ";
    cin >> times;

    if (choice == 1) {
        animal = new Dog();
    } else if (choice == 2) {
        animal = new Cat();
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    for (int i = 0; i < times; i++) {
        animal->sound();   // runtime polymorphism
    }

    delete animal;   // calls correct destructor
    return 0;
}
