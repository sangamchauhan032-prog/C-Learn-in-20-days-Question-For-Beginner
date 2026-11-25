#include <iostream>
using namespace std;
int numbers[5];
int main() {
	cout << "Enter the five input numbers:\n";
	for (int i = 0; i < 5; ++i) {
		cin >> numbers[i];
	}
	
    int max=numbers[0];
    for(int i=0; i<5; i++)
if(numbers[i]>max)
{max=numbers[i];}
cout<<"the max number is -"<<max<<endl;
return 0;



  
  
}
