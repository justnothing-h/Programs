#include<iostream>
using namespace std;
class sum{
    public:
        int add(int a, int b){
            return a + b;

        }
        int add(int a, int b, int c){
            return a + b + c ;

        }
        double add(double a, double b){
            return a + b;
        }
};
int main(){
    sum s;
    cout<<s.add(5,6)<<endl;
    cout<<s.add(5,6,7)<<endl;
    cout<<s.add(3,4)<<endl;
}