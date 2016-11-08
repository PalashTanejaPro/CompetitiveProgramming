#include <bits/stdc++.h>

using namespace std;

void bfs(int s,vector<vector<int>> graph,int v){
	list<int> q;
	bool visited[v];
	for (int i = 0; i < v; ++i)
	{
		visited[i]=0;
	}
	visited[s]=1;
	q.push_back(s);
	while(!q.empty()){
		int x = q.front();
		cout<<"visited "<<x<<" ";
		q.pop_front();
		for (auto i = graph[x].begin();i!=graph[x].end();++i)
		{
			if (!visited[*i])
			{
				q.push_back(*i);
				visited[*i]=1;
			}
		}
	}
}
int main(){
	int v,e,from,to;
	cin>>v>>e;
	vector<vector<int>> graph(v+1);
	for (int i = 0; i < e; ++i)
	{
		cin>>from>>to;
		graph[from].push_back(to);//for undirected graphs only
		graph[to].push_back(from);
	}
	int src;
	cin>>src;
	bfs(src,graph,v);
}