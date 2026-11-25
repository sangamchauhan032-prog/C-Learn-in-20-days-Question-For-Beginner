#include<iostream>//first we need to include string
#include<string>
using namespace std;
string name; //intialize string
int main(){
    cout<<"enter your name" << endl;//give output
    cin>>name;//get input
if(name.length()>12)//name.length gives total length of string
{
    cout<<"your name can't be more than of 12 letters"<<endl;

}else{
    cout<<"welcome your name is "<<endl;

}
return 0;

}//if user input is enter which is empty use name.empty() and add if else statements 




