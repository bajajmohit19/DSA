#include<iostream>
using namespace std;

int main() {
    int a,b;
    int max, min;
    cout<<"Enter 2 numbers";
    cin>>a>>b;

    if(a > b){
        max = a;
        min = b;
    }else {
        max = b;
        min = a;
    }
    cout<<"Max is "<<max;
    cout<<"Min is "<<min;

    return 0;
}