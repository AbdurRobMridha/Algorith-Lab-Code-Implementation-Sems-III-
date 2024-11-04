#include<bits/stdc++.h>
using namespace std;
void QuickSort(int arr[], int l, int r)
{
    if (l >= r) return;
    int p = l;
    int L = l, R = r;
    while (l != r)
    {
        if (p == l)
        {
            if (arr[r] >= arr[p])
                r--;
            else
            {
                swap(arr[r], arr[p]);
                p = r;
            }
        }
        else
        {
            if (arr[l] <= arr[p])
                l++;
            else
            {
                swap(arr[l], arr[p]);
                p = l;
            }
        }
    }
    QuickSort(arr, L, p - 1);
    QuickSort(arr, p + 1, R);
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
         cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    cout << "After QuickSort\n";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}
