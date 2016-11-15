#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n+1];
	int dp[n+1];
	int d[n+1];
	for (int i = 1; i <=n; ++i)
	{
		cin>>arr[i];
	}
	dp[0]=0;
	dp[1]=arr[1];
	dp[2]=max(arr[1],arr[2]);
	d[0]=0;
	d[1]=0;

	for (int i = 2; i <=n; ++i)
	{
		d[i]=max(d[i-1],d[i-2]+arr[i]);
	}
	for (int i = 3; i <n; ++i)
	{

		dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
	}
	cout<<max(dp[n-1],d[n])<<endl;
	return 0;
}
