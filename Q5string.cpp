#include<iostream>
#include<string>
using namespace std;

string name = "sangam";

int main(){

    for(int i = 0; i < name.length()/2; i++)
    {
        char temp = name[i];

        name[i] = name[name.length()-1-i];

        name[name.length()-1-i] = temp;
    }

    cout << name << endl;

    return 0;
}
