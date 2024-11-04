#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
int A[MAX_SIZE];
int n;
void Heapify(int i)
{
    if (i > n / 2) return;
    int currentnode = i;
    int leftchild = 2 * i;
    int rightchild = 2 * i + 1;
    if ((rightchild > n) || (A[leftchild] >
                             A[rightchild]))
    {
        if (A[leftchild] > A[currentnode])
        {
            swap(A[leftchild], A[currentnode]);
            Heapify(leftchild);
        }
    }
    else
    {
        if (A[rightchild] > A[currentnode])
        {
            swap(A[rightchild], A[currentnode]);
            Heapify(rightchild);
        }
    }
}
void BuildHeap()
{
    int m = n / 2;
    for (int i = m; i >= 1; i--)
    {
        Heapify(i);
    }
}
void Heapsort()
{
    int N = n;
    while (n >= 1)
    {
        swap(A[1], A[n]);
        n--;
        Heapify(1);
    }
    n = N;
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
    BuildHeap();
    cout << "Performed BuildHeap Successfully!\n";
         Heapsort();
    cout << "Performed HeapSort Successfully!\n";
         cout << "After Heapsort\n";
    for (int j = 1; j <= n; j++)
    {
        cout << A[j] << " ";
    }
    cout << endl;
    cout << endl;
    return 0;
}
