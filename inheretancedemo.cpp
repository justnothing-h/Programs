#include <iostream>
using namespace std;
class person{
    public:
    string name;
    protected:
    int age;

};
class student: public person{
    public:
    int rollno;
    int marks;
    student(string name, int age, int rollno, int marks){
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->marks = marks;
    }
    void display(){
        cout<<"Name: "<<name<<", age: "<<age<<", rollno : "<<rollno<<", marks: "<<marks<<endl;
    }
};
int main(){
    student s1("harshit", 20, 101, 95);

    s1.display();
}