#include <iostream>
using namespace std;
int numbers[5];
int main(){
    cout<<"Enter the numbers to list in arry"<<endl;
    for(int i=0; i<5; i++){
        cin>>numbers[i];


    }
int count=0;
int value;

cout<<"Enter the number to find value "<<endl;
cin>>value;
for(int i=0; i<5; i++)
{
    if (numbers[i]>value){
        count++;
    }

}
cout<<"the numbers are ="<<value<<endl;


}