#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array using insertion sort:"<<endl;
        for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}
