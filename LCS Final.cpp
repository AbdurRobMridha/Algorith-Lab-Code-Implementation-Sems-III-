#include<bits/stdc++.h>
using namespace std;
int len1, len2;
int LCS(string &s1, string &s2)
{
    len1 = s1.size();
    len2 = s2.size();
    int table [len1+1][len2+1];
    int i,j;
    for( i=0; i<=len1; i++)
    {
        for( j=0; j<=len2; j++)
        {
            if(i==0 || j==0) table[i][j]=0;
            else if(s1[i-1]==s2[j-1]) table[i][j]= table[i-1][j-1]+1;
            else table[i][j]= max(table[i-1][j], table [i][j-1]);
        }
    }
//cout<<table[len1][len2];
    return table[len1][len2];

}

int main()
{

    string s1, s2;
    cout<<"Enter two string : ";
    cin>>s1>>s2;
    cout<<"LCS length: ";
    cout<<LCS(s1, s2);
    // LCS(s1,s2);
return 0;
}
