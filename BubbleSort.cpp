#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int x;
    cout<<"Enter the number of elements: ";
    cin>>x;
    cout<<"Enter the array elements: ";
    for(int i=0; i<x; i++)
        cin>>arr[i];
    for(int stp=0; stp<x; stp++)
    {
        for(int i=0; i<x-stp-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    cout<<"Output of Bubble sort!!!"<<endl;
    for(int i=0; i<x; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<endl;
    return 0;
}
