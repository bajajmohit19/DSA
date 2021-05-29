#include<iostream>
using namespace std;

int main(){
    int i, n;
    int sum = 0;
    cout<<"Enter the value for n";
    cin>>n;

    for(i = 1; i<=n; i++){
        sum += i;
    }
    cout<<"Sum of n natural numbers is "<<sum<<endl;

    return 0;

}
