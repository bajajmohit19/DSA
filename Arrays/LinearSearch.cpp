#include<iostream>
using namespace std;
int LinearSearch(int a[], int k, int key){
    // for(int i = 0; i<=k; i++){

    // cout<<a[i]<<endl;
    // }
    for(int i=0; i<k; i++){
        if(a[i] == key){

        return i;
        }
    }
    return -1;
}
int main(){
    int arr[5], k = 0;
    cout<<"Enter elements of array"<<endl;
    for(int i = 0; i<5; i++){
        cin >> arr[i];
    }
    cout<<"Enter element to search";
    cin>>k;
    cout<<LinearSearch(arr,5,k)<<endl;
return 0;

}