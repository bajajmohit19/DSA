#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"Enter any number";
    cin>>n;

    for(i = 1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;

}