#include <iostream>
using namespace std;

int numbers[5];

int main()
{
    cout << "Enter five numbers:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    int min = numbers[0];

    for(int i = 1; i < 5; i++)
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    cout << "The smallest number is: " << min << endl;

    return 0;
}