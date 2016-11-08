#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	ll n,t1,t2;
	cin>>n;
	std::vector<pair<ll,ll>> vec;
	ll ctr=n;
	for (int i = 0; i < n; ++i)
	{
		cin>>t1>>t2;
		vec.push_back({t1,t2});
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n-1; ++i)
	{
		if (vec[i].second<vec[i+1].first)
		{
			
		}
		else{
			ctr--;
			i++;
		}
	}
	cout<<ctr<<endl;
}