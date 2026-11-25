#include <iostream>
using namespace std;
int numbers[5];
int main() {
	cout << "Enter the five input numbers:\n";
	for (int i = 0; i < 5; ++i) {
		cin >> numbers[i];
	}
	
    cout<<numbers<<endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << numbers[i] << " ";
    }

    return 0;

}
