#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool flag = 0;

    cout << "Enter a number" << endl;
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout<<"Not Prime";
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "Number is prime" << endl;
    }
    return 0;
}