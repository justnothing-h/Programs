#include <iostream>
#include <string>
using namespace std;

/* ---------- Base Class ---------- */
class Employee {
protected:
    int empid;
    string name;

public:
    Employee(int empid, string name) {
        this->empid = empid;
        this->name = name;
    }

    virtual void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Name: " << name << endl;
    }
};

/* ---------- Permanent Employee ---------- */
class PermanentEmployee : public Employee {
    float basicsalary;

public:
    PermanentEmployee(int empid, string name, float basicsalary)
        : Employee(empid, name) {
        this->basicsalary = basicsalary;
    }

    void display() override {
        cout << "\nPermanent Employee Details\n";
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicsalary << endl;
    }
};

/* ---------- Contract Employee ---------- */
class ContractEmployee : public Employee {
    float hourlyrate;
    float hourworked;

public:
    ContractEmployee(int empid, string name, float hourlyrate, float hourworked)
        : Employee(empid, name) {
        this->hourlyrate = hourlyrate;
        this->hourworked = hourworked;
    }

    void display() override {
        cout << "\nContract Employee Details\n";
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Hours Worked: " << hourworked << endl;
        cout << "Hourly Rate: " << hourlyrate << endl;
        cout << "Salary: " << hourlyrate * hourworked << endl;
    }
};

/* ---------- Main Function ---------- */
int main() {

    PermanentEmployee p1(1, "Rahul", 40000);
    ContractEmployee c1(10, "Raman", 580.5, 8.5);

    p1.display();
    c1.display();

    return 0;
    
}
