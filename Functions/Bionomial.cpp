#include <iostream>
#include <cmath>
using namespace std;

int fact(int num)
{
    int fact = 1;

        for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int a, b;
    cout << "Enter value for n and r";
    cin >> a >> b; 
    int ans = fact(a)/(fact(b) - fact(a-b));
    cout << ans<< endl;        
    return 0;
}