#include <iostream>
using namespace std;
int main(){
int a=3;
int*b=&a;
//b stores address of a 
//&a also stores address of a
//*b stores value of a 
cout<<"addressof a stors in b"<<b<<endl;
cout<<"address of &b as it is pointer which stores addrress as b"<<&b<<endl;
cout<<"value of a"<<*b<<endl;

//pointer to pointer 
//Reference → nickname
//Pointer   → address holder

int**c=&b;
cout<<"Adress of b "<<c<<endl;
}