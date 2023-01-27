#include "iostream"
using namespace std;

class Base{
public:
    Base(){cout<<"Ctor Base\n";}
    ~Base(){cout<<"Dtor Base\n";}
};

class Derive: public Base{
public:
    Derive(){cout<<"Ctor Derive\n";}
    ~Derive(){cout<<"Dtor Derive\n";}
};

int main(){
    // valid output
    Derive* d = new Derive();
    delete d;
    // only delete base and not derive.
    // to avoid we should define base constructor as virtual.
    Base *base = new Derive();
    delete base;
}