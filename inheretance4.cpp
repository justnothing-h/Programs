#include<iostream>
using namespace std;
class Printer{
    public :
    void print(){
        cout<<"This is a Printer"<<endl;
    }

};
class Scanner{
    public :
    void scan(){
        cout<<"This is a Scanner"<<endl;
    }
};
class ALLInOnePrinter: public Printer,public Scanner{
    public :
    void fax(){
        cout<<"This is a Fax Machine"<<endl;
    }
};
int main(){
    ALLInOnePrinter aio;
    aio.print();
    aio.scan();
    aio.fax();
    return 0;
}