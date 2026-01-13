#include <iostream>
using namespace std;

class Teacher {
public:
    string name;

    Teacher(string n) {
        name = n;
    }

    void display() {
        cout << "Teacher Name: " << name << endl;
    }
};

class Department {
public:
    Teacher *t;   

    Department(Teacher *teacher) {
        t = teacher;
    }

    void show() {
        cout << "Department has ";
        t->display();
    }
};

int main() {
    Teacher t1("Dr. Mehta");
    Department d1(&t1);   

    d1.show();

    return 0;
}
