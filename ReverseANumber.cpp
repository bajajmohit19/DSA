#include <iostream>
using namespace std;
int main()
{
    int number;
    int reverse = 0;
    cout << "Enter a number";
    cin >> number;

    while (number > 0)
    {
        int lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number = number / 10;
    }
    cout << "Reverse number is" << endl;
    cout << reverse;
    return 0;
}