#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(string name){
        this->name = name;
    }
    void display(){
        cout<<"Student Name: "<<name<<endl;
    }
};
class Teacher{
    public:
    string tname;
    Teacher(string tname){
        this->tname = tname;
    }
    void teach(Student &s){
        cout<< tname<<" is teaching "<<s.name<<endl;
    }
    };
    int main(){
        Student s1("Alice");
        Teacher t1("Mr. Smith");
        s1.display();
        t1.teach(s1);
    }