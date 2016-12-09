#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
bitset<N> vis;
vector< vector<int> > graph;
void dfs(int start){
	stack<int> s;
	s.push(start);
	while(s.empty()==false){
		int top = s.top();
		s.pop();
		if(!vis[top]){
			cout<<"visited "<<top<<" th node"<<endl;
			vis[top]=1;
			auto it = graph[top];
			for(auto i = it.begin();i!=it.end();i++){
				s.push(*i);
			}
		}

	} 
}
int main(int argc, char const *argv[])
{
	graph.push_back({});
	graph.push_back({2,3});
	graph.push_back({1});
	graph.push_back({1});
	dfs(1);
	return 0;
}