#include <iostream>
using namespace std;

class B{
public:
    B(){}
    void f (){
        cout << "B::f()" << endl;
    }
};

class D1: public B{
public: D1(){}
void f(){
    cout << "D1::f()" << endl;
}
};

class D2: public B{
    public: D2(){}
    void f(){
    cout << "D2::f()" << endl;
}
};

// gets an address in the memory, so you can also send the variable with &.
void g(B* b){
    b->f();
}

void g(B& b){
    b.f();
}

int main() {
    D1 d1;
    D2 d2;
    g(d1);
    g(&d1);
    g(d2);
    g(&d2);
}
