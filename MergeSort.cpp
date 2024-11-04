#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
int A[MAX_SIZE];
int n;
int temp[MAX_SIZE];
void Merge(int l, int mid, int r)
{
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (A[i] <= A[j])
        {
            temp[k++] = A[i++];
        }
        else
        {
            temp[k++] = A[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = A[i++];
    }
    while (j <= r)
    {
        temp[k++] = A[j++];
    }
    for (int p = l; p <= r; p++)
    {
        A[p] = temp[p];
    }
}
void MergeSort(int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        MergeSort(l, mid);
        MergeSort(mid + 1, r);
        Merge(l, mid, r);
    }
}
int main()
{
    cout << "Enter the number of elements in the array: ";
         cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    MergeSort(1, n);
    cout << "After MergeSort\n";
    for (int j = 1; j <= n; j++)
    {
        cout << A[j] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}
