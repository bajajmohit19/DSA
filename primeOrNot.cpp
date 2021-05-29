#include<iostream>
using namespace std;

int main() {
    int n,i;

    cout << "Enter any number" ;
    cin >> n;

    for(i = 2; i < n; i++ ){
        if(n % i == 0){
            cout<<"Number is not prime";
            break;
        }
        
    }
    if( i == n){
            cout<<"Numer is prime!!";
        }
    return 0;
}
