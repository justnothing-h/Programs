#include<iostream>
using namespace std;
class Number{
    private:
        int a;
    public:
        Number(){
            a = 10;
        }
    friend void display(Number obj);
};
void display(Number obj){
    cout<<"value of a is = "<<obj.a<<endl;
}
int main(){
    Number n;
    display(n);
    return 0;
}