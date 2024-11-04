#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int x;
    cout<<"Enter the number of elemnets"<<endl;
        cin>>x;
    cout<<"Enter the array"<<endl;
    for(int i=0; i<x; i++)
        cin>>arr[i];
    for(int i=0; i<x; i++)
    {
        int mini=i;
        for(int j=i+1; j<x; j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    cout<<"Sorted array using selection sort!!!"<<endl;
        for(int i=0; i<x; i++)
            cout<<arr[i]<<" ";
            cout<<endl;
            cout<<endl;
            cout<<endl;
    return 0;
}
