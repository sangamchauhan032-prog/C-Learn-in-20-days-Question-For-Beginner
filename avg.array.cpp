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
double average = (double)sum / 5;

    cout << "Average of numbers is " << average << endl;

    return 0;
  
}
