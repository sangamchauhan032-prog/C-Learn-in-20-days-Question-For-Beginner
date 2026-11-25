#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int largest = numbers[0];
    int smallest = numbers[0];

    cout << "We are going to find the largest and smallest number" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i];

        if (numbers[i] > largest) {
            largest = numbers[i];
        }

        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    int difference = largest - smallest;
    cout << endl;
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "The difference is " << difference << endl;

    return 0;
}