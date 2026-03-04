#include<iostream>
using namespace std;

class Area{

public:

int area(int s){
    return s*s;
}

int area(int l,int b){
    return l*b;
}

float area(float r){
    return 3.14*r*r;
}

};

int main(){

Area a;

cout<<"Area of square = "<<a.area(4)<<endl;
cout<<"Area of rectangle = "<<a.area(4,5)<<endl;
cout<<"Area of circle = "<<a.area(3.5f);

}