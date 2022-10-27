#include <iostream>
using namespace std;
int SelectionSort(int a[], int k, int key)
{

cout << k;
for(int i = 0; i<=k; i++)
{
    for(int j = i+1; j<=k; j++){
        if(a[j] < a[i]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
for(int i = 0; i<=k; i++){
    cout <<  a[i] << " ";
}cout << endl;
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

    cout << SelectionSort(arr, 5, k) << endl;
    return 0;
}