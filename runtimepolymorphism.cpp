#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"Calculating area of shape"<<endl;
    }
};
class circle: public Shape{
    public:
    int r;
    circle(float r){
        this->r = r;
    } 
    void area()override{
        cout<<"Area of circle: "<<3.14*r*r<<endl;
    }
};
class rectangle:public Shape{
    public:
    int l,b;
    rectangle(int l,int b){
        this->l = l;
        this->b = b;
    }
    void area()override{
        cout<<"Area of rectangle: "<<l*b<<endl;
    }
};
int main(){
    Shape* s = nullptr;
    rectangle r (4,5);
    circle c (3.5);
    s = &r;
    s->area();
    s = &c;
    s->area();
}