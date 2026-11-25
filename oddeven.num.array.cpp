#include<iostream>
using namespace std;
int numbers;
int main(){
    int numbers []= {10,23,25,28,9};
    int odd=0;
    int even=0;
    for(int i =0; i<5; i ++)
    if (numbers[i]%2==0){
         even++;

    }
else{
    odd++;

}
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;


}