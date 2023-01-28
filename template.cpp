#include "iostream"
using namespace std;
// Example 1
template <class T> // all the variables that are not int will get here.
T& foo (T& a, T& b){
    cout << "line 6" << endl;
}
template<> // all the variables that are int will get here.
int& foo <int>(int& a, int& b){
    cout << "line 10" << endl;
}
// Example 2
template <class H>
void foo(H& a){
    cout << a;
}
class Bar{};

int main(){
    int a = 2;
    foo(a);
    // no defined cout in bar. Need to override for the cout to work properly.
    // We assume that cout knows how to receive but it's not the case.
    Bar b;
    //foo(b);
}