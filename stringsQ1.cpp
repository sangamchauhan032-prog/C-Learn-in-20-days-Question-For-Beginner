#include<iostream>
#include<string>
using namespace std;
string name;
int main(){
    cout<<"enter your name"<<endl;//in this question we need to find first character of string and last character of string

    cin>>name;
    cout<<"String ="<<name<<endl;
    cout<<"First Character Of string"<<name[0]<<endl;
    cout<<"Last character of the string "<<name[name.length()-1]<<endl;

}