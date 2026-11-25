#include <iostream>
using namespace std;
int number[5];
int main(){
cout <<"enter the five numbers"<<number<<endl;
for (int i=0; i<5; i++){
    cin>>number[i];


} int search;
cout<<"enter the number for search"<<endl;
cin>>search;
for(int i=0; i<5; ++i){
    if(search==number[i])
    {cout<<"the number is "<<search<<endl;}

    else{
        cout<<"number not found"<<endl;

    }
    return 0;

}
}