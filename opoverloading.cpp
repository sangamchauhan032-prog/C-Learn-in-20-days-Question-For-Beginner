#include <iostream>
using namespace std;
class complex
{
public:
int real;
int imag;
complex operator +(complex c)

{
    complex result;
    result.real=real + c.real;
    result.imag=imag + c.imag;
    return result; }

}; int main(){
    complex c1;
    complex c2;
    c1.real=2;
    c2.real=3;
    c1.imag=5;
    c2.imag=4;
    complex c3= c1+c2;
    cout<<c3.real<<"+"<<c3.imag<<"i";
    return 0;

} 