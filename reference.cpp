#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int &r = a; // Reference → nickname
    // Pointer   → address holder
    r = 2;
    cout << a << endl;
}