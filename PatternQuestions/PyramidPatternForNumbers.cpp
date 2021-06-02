#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Entr the value for n"<<endl;
    cin >> n;

    int space = n - 1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <= space; j ++)
        {
            cout << " ";
        }
        for( int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        space--;
        cout << endl;
    }
}