#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    int reverse = 0;
    cout << "Enter a number";
    cin >> number;

    int original = number;
    while (number > 0)
    {
        int lastDigit = number % 10;
        reverse += lastDigit*lastDigit*lastDigit;
        number = number / 10;
    }
    if(reverse == original)
    {
        cout<<"Numebr is Armstrong";
    }
    else {
        cout<<"Numebr is Not Armstrong!";
        
    }
    
    return 0;
}