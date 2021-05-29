#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    int min, max;

    cout << "Enter 3 numbers";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        if (b > c)
        {
            max = a;
            min = c;
        }
        else
        {
            max = a;
            min = b;
        }
    }
    else
    {
        if (b > c)
        {
            if (c > a)
            {
                max = b;
                min = a;
            }else {
                max = b;
                min = c;
            }
        }
        else
        {
            max = c;
            min = a;
        }
    }
    cout << "max is " << max << "and min is " << min;
}