#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char ch;

    cout << "Enter two Numbers" << endl;
    cin >> n1 >> n2;

    cout << "Enter your choice" << endl ;
    cout << "1. Add the two numbers"
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    case '*':
        cout << n1 * n2;
        break;

    default:
        cout << "Invalid operand";
        break;
    }
}