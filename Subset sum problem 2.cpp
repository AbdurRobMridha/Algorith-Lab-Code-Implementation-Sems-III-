#include <bits/stdc++.h>
using namespace std;
#define LL long long
vector<int> c ;
int dp[10001][10001];
bool func(LL n, LL k) {
    if (k == 0) return true;
    if (n < 0 || k < 0) return false;
    if (dp[n][k] != -1) return dp[n][k];

    // Try including or excluding the current element
    bool include = func(n - 1, k - c[n]);
    bool exclude = func(n - 1, k);
    return dp[n][k] = include || exclude;
}
void print(LL n, LL k) {
    if (n < 0 || k == 0) return;

    if (k - c[n] >= 0 && func(n - 1, k - c[n])) {
        cout << c[n] << " ";
        print(n - 1, k - c[n]);
    } else {
        print(n - 1, k);
    }
}
int main() {
    memset(dp, -1, sizeof(dp));
    LL k;
    LL n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        c.push_back(a);
    }
    cout<<"Enter the sum that you want to make: ";
    cin >> k;
    if (func(c.size() - 1, k)) {
        cout << "Possible to make the sum using the following elements:" << endl;
        print(c.size() - 1, k);
        cout << endl;
    } else {
        cout << "Not possible to make the sum" << endl;
    }
    return 0;
}
