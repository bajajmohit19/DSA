#include <iostream>
#include <cmath>
using namespace std;

int fact(int num)
{
    int fact = 1;

        for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int a;
    cout << "Enter a number";
    cin >> a ;
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout << fact(i)/(fact(j) * fact(i-j)) << " ";
        }
        cout << endl;
    } 
    return 0;
}