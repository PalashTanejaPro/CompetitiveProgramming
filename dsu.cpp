#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
int arr[N];
int size[N];
void initialize(){
	for(int i=0;i<N;++i){
		arr[i]=i;
		size[i]=1;
	}
}
int root(int i){
	while(arr[i]!=i){
		i=arr[i];
	}
	return i;
}

void union(int a,int b){
	int root_a  = root(a);
	int root_b = root(b);
	if(size[root_a]>size[root_b]){
		arr[root_b]=arr[root_a];
		size[root_a]+=size[root_b];
	}
	else{
		arr[root_a]=arr[root_b];
		size[root_b]+=size[root_a];
	}
}
int main(int argc, char const *argv[])
{
	// implementation of disjoint set union
	return 0;
}