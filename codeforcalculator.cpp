#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter Your First Number using Your keyboard: ";
    cin >> num1;

    cout << "Enter Your Arithmetic Operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter your second number using your keyboard: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Error! Operator is not correct";
    }

    return 0;
}