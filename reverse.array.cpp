#include <iostream>
using namespace std;
int numbers[5];
int main(){
    cout<<"enter the five numbers"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>numbers[i];
    }
int temp;
for(int i=0; i<5/2; i++){//here 5/2 represnts the number in deision 2 as it half the array
    int temp = numbers[i];
    numbers[i]=numbers[4-i];
    numbers[4-i]=temp;}// 4-i represent oppositenumber of ame array
cout<<"the reverse numbers are ";
for(int i=0; i<5; i++)
{
cout<<numbers[i];

}
    
return 0;
}