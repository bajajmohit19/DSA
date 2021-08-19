#include <iostream>
#include <cmath>
using namespace std;

int fact(int num)
{
    int t1 = 0;
    int t2 = 1;
    int fact = 1;

        for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int a;
    cout << "Enter a number";
    cin >> a; 
    cout << fact(a) << endl;        
    return 0;
}