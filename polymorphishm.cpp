#include<iostream>
using namespace std;
class shape{
    public :
           virtual void area(){
            cout<< "calculating area of shapes\n";
           }
           virtual ~shape(){}
};
class circle : public shape{
    public:
    double radius;
    circle( double r){
        radius = r;
    }
    void area() override{
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};
class square : public shape{
    public :
    double side;
    square(double s){
        side = s;
    }
    void area() override{
        cout << "area of square: " << side * side <<endl;
    }
    void getside(){
        cout << "enter side: ";
        cin >> side;
    }
};
int main(){
    shape* s1;
    shape* s2;
    circle c1(5.0);
    square sq2(4.0);
    s1 = &c1;
    s2 = &sq2;
    s1->area();
    s2->area();
    sq2.getside();
    s2->area();
}