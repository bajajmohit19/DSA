#include <iostream>
using namespace std;

int main()
{
    int n, p = 1;

    cout << "Enter the value for row" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << p << " ";
            p++;
        }
        cout << endl;
    }
}