#include <iostream>
using namespace std;
int BubbleSort(int a[], int n)
{
// for(int i=0; i<n; i++){
//     cout << i;
// }
cout << n << "asdqwedqwedwq";
int counter = 1;
while(counter < n){
    for(int i= 0; i<n - counter; i++){
        if(a[i] > a[i+1]){

        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        }
    }
    counter++;
}
for(int i = 0; i<n; i++){
    cout << a[i] << " ";
}cout << endl ;
return 0;
}
int main()
{
    int arr[5], k = 0;
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << BubbleSort(arr, 5) << endl;
    return 0;
}