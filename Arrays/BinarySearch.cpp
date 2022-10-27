#include <iostream>
using namespace std;
int BinarySearch(int a[], int k, int key)
{
    int s = 0, e = k;
    int mid = 0;
    while (s <= k)
    {
        mid = (s + e) / 2;
        if (key < a[mid])
        {
            e = mid - 1;
        }
        else if(key > a[mid])
        {
            s = mid + 1;
        }
        else
            return mid;
    }
    return mid;


}
int main()
{
    int arr[5], k = 0;
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search";
    cin >> k;
    cout << BinarySearch(arr, 5, k) << endl;
    return 0;
}