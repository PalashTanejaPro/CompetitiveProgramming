#include <bits/stdc++.h>

using namespace std;
int dp[10000][10000];
int LCS(string x){
    int m=x.length();
    string x2;
    for (int i = m-1; i>=0; --i)
    {
        x2.push_back(x[i]);
    }
    for (int i = 0; i <=m; ++i)
    {
        for (int j = 0; j <=m; ++j)
        {
            if (i==0||j==0)
            {
                dp[i][j]=0;
            }
            else if (x[i-1]==x2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][m];
}
std::map<string,char> mp;
std::map<string,int> mpint;
int main(){
    int n;
    cin>>n;
    string s;
    string tmp;
    char x = 'a';
    for (int i = 0; i < n; ++i,++x)
    {
        cin>>tmp;
        if (mpint[tmp]==0)
        {
            mpint[tmp]++;
            mp[tmp]=x;
            s.push_back(x);
        }
       else{
        s.push_back(mp[tmp]);
       }
    }
    cout<<s.length()-LCS(s)+1;
}