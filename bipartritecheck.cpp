#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> graph[2002];
bitset<2002> color,visited;
bool bfs(int start){
    color.reset();
    visited.reset();
    queue<int> q;
    q.push(start);
    if(!visited[start])
        color[start]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<graph[x].size();++i){
            if(!visited[graph[x][i]]){
                visited[graph[x][i]]=1;
                color[graph[x][i]]= !color[x];
                q.push(graph[x][i]);
            }
            else if(visited[graph[x][i]]&&color[graph[x][i]]==color[x])
                return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int t,temp;
    bool flag=0;
    cin>>t;
    temp=t;
    while(t--){
    for(int i=0;i<2002;++i)
        graph[i].clear();
    flag=0;
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; ++i)
    {
        int t1,t2;
        cin>>t1>>t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    for (int i = 1; i <=n; ++i)
    {
        if(!bfs(i)){
            cout<<"Scenario #"<<temp-t<<":\n";
            cout<<"Suspicious bugs found!\n";
            flag=1;
            break;
        }
    }
    if(!flag){
    cout<<"Scenario #"<<temp-t<<":\n";
    cout<<"No suspicious bugs found!\n";
    }
}
    return 0;
}
