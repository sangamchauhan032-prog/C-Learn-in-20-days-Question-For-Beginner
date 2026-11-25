#include <iostream>
using namespace std;
int numbers[5];
int main (){
    cout<<"Enter your five input numbers"<<endl;
    for(int i=0; i<5; i++){
    cin>>numbers[i];}
    int search;
    
    cout<<"enter the input  for search"<<endl;
    cin>>search;
    bool found=false;

    for(int i=0;i<5;++i)
 if(numbers[i]==search)
 {found=true;
break;}
if (found)
{cout<<"the number is "<<search<<endl;
}else{cout<<"number not found"<<endl;
}
return 0;
}