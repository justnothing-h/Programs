#include<iostream>
using namespace std;

class Maximum{

public:

int max(int a,int b,int c){

    int m=a;

    if(b>m)
    m=b;

    if(c>m)
    m=c;

    return m;

}

};

int main(){

Maximum m;

int x,y,z;

cout<<"Enter three numbers:";
cin>>x>>y>>z;

cout<<"Maximum number = "<<m.max(x,y,z);

}