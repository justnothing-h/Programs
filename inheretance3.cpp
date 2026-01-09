#include<iostream>
using namespace std;
class Shape{
    public:
        string shape;
    Shape(string shape){
        this -> shape = shape;
    }

};
class circle : public Shape{
    public :
    double radius;
    circle(string  shape, double radius) : Shape(shape){
        this -> radius = radius;
    }
    void area(){
        cout<<"Area of "<<shape<<" with radius "<<radius<<" is "<<3.14*radius*radius<<endl;
    }

};
class square : public Shape{
    public :
    double side;
    square(string shape, double side) :Shape(shape){
        this -> side = side;
    }
    void area(){
        cout<<"Area of "<<shape<<"with side "<<side<<" is  "<< side*side<<endl;    }
};
int main(){
    circle c1("Circle",5.0);
    square s1("Square",4.0);
    c1.area();
    s1.area();
}