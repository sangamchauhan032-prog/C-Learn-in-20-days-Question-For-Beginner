#include<iostream>
#include<string>
using namespace std;

string name = "madam";

int main(){

    bool isPalindrome = true;

    for(int i = 0; i < name.length()/2; i++)
    {
        if(name[i] != name[name.length()-1-i])
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome == true)
        cout << "Palindrome" << endl;

    else
        cout << "Not Palindrome" << endl;

    return 0;
}