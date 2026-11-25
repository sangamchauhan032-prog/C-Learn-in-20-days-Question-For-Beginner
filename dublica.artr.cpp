#include<iostream>
using namespace std;
int numbers[5];
int main (){
    cout<< "enter the numbers "<<endl;
    for(int i=0; i<5; i++)
    {
        for(int  j =i+1; j<5; i++)
        {
            if (numbers[i]==numbers[j])
            {
                cout<<"the dublicate number is "<<numbers[i]<<endl;

            }
        }
    }return 0;
    
}