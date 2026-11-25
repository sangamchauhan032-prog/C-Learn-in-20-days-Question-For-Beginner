#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 10, 30, 10};

    int search;

    cout << "Enter the number to search: ";
    cin >> search;

    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] == search)
        {
            count++;
        }
    }

    cout << search << " occurs " << count << " times" << endl;

    return 0;
}