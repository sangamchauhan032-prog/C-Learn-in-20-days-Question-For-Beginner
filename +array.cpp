#include <iostream>
using namespace std;
int numbers[5];
int main() {
	cout << "Enter the five input numbers:\n";
	for (int i = 0; i < 5; ++i) {
		cin >> numbers[i];
	}
	
    int sum=0;
    for(int i =0; i<5; i++) 
  {sum= sum + numbers[i];
  }
  cout<<"sum"<<endl;
   
  return 0;
  
  
}
