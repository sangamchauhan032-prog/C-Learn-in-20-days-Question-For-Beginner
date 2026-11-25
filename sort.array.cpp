#include <iostream>
using namespace std;

int main() {

    int numbers[5] = {40, 10, 50, 20, 30};

    for(int i = 0; i < 4; i++) {//here we use 4 cause we need to comare array with other elements

        for(int j = 0; j < 4-i; j++) {

            if(numbers[j] > numbers[j+1]) {

                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;

            }
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}