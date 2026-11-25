#include<iostream>
using namespace std;
int numbers[5];
int main(){
    int numbers[]={10,9,25,24,28};
    for(int i=0; i<5; i++)
    if(numbers[i]%2==0){
        cout<<" the odd numbers are "<<numbers[i];

    }else{
        cout<<"the even numbers are "<<numbers[i];


    }
return 0;

}