#include <iostream>
#include <cmath>
using namespace std;

void fib(int num)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

        for (int i = 1; i < num; i++)
    {
        cout << t1 << endl;
        nextTerm = t1+t2;
        t1 = t2 ;
        t2 = nextTerm;
    }
    return ;
}

void main()
{

    int a;
    cout << "Enter a number";
    cin >> a; 
    fib(a);        
}
