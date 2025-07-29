#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    
    vector<vector<int>>adj(n+1);
    for (int i=0;i<n-1;i++) {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<bool>vis(n+1,false);
    queue<int>q;

    vis[1] = true;
    q.push(1);

    vector<int>order;
    order.reserve(n);

    while(!q.empty()) {
        int u=q.front(); 
        q.pop();
        
        order.push_back(u);
        for(int v: adj[u]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }

  
    for (int i=0;i<n;i++) {
        cout<<order[i]<<(i+1<n ? ' ' : '\n');
    }
    return 0;
}
