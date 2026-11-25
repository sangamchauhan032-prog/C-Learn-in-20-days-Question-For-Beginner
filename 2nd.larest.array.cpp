#include<iostream>
using namespace std;
int numbers[5];
int main(){
    cout <<"enters the numbers "<<endl;
    for(int i=0; i <5; i ++)
    {
        cin>>numbers[i];

    }
    int largest=numbers[0];
    int second=numbers[0];
    for(int i=1; i<5; i++)
    {
        if(numbers[i]>largest)
        {
            second =largest;
            largest=numbers[i];

        }else if(numbers[i]>second&&numbers[i]!=largest)
        {
            second=numbers[i];
        }
    }cout << "Largest = " << largest << endl;
    cout << "Second largest = " << second << endl;

    return 0;
}