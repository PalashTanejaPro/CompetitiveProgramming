//KMP Algorithm Implementation
#include <bits/stdc++.h>

using namespace std;

void pre(string s,int arr[]){
	int n = s.length(),k;
	arr[0]=-1;
	for(int i=1;i<n;++i){
		k = arr[i-1];
		while(k>=0){
			if(s[k]==s[i-1])
				break;
			else
				k = arr[k];
		}
		arr[i]=k+1;
	}
}

bool KMP(string pattern,string search){
	int m = pattern.length();
	int n = search.length();
	int arr[m];
	pre(pattern,arr);
	int i=0,k=0;
	while(i<n){
		if(k==-1){
			k=0;
			i++;
		}
		else if(search[i]==pattern[k]){
			i++;
			k++;
			if(k==m){
				return 1;
			}
		}
		else{
			k=arr[k];
		}
	}
	return 0;
}

int main(){
	string search,pattern;
	cin>>search>>pattern;
	if(KMP(pattern,search)){
		cout<<"Found ";
		return 0;
	}
	else{
		cout<<"Not Found ";
		return 0;
	}
}