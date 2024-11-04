///coin changing
///complexity O(n) n==number of denominations;
#include<bits/stdc++.h>
using namespace std;

int main(){

    //= {1,5,10,25,100};
    int coins;
    int i = 0, t=0, cnt=0, ca=0,n;
    cout<<"Enter the amount : ";
    cin>>n;
    cout<<"enter the number of coins: ";
    cin>>coins;
    vector<int> v (coins);
    cout<<"Enter the coins : "<<endl;
    for(int i=0;i<coins;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(),v.end());

    cout<<"\nCoins quantity :\n";
    while(i<v.size() && n>0){
        ca  = n/v[i];
       cout<<"\t"<<v[i]<<"-> " <<ca<<"\n";
        n = n%v[i]; i++; cnt+=ca;
    }
    cout<<"Total coin used : "<<cnt<<"\n";
    return 0;
}
