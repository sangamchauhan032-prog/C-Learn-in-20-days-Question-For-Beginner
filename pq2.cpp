#include<iostream>
using namespace std;
int numbers[5];
int main(){
    cout<<"enter the numbers to add in array"<<endl;
    for(int i=0; i<5; i++){
        cin>>numbers[i];

    }
    int sum=0;
    for(int i=0; i<5; i++ )
    if(numbers[i]%2==0){
    sum = sum + numbers[i];

    }else{
        cout<<"the left numbers are odd "<<endl;
        return 0;
        
    }
}