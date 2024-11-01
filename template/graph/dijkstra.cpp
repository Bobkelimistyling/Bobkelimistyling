#include<bits/stdc++.h>
using namespace std;
#define int long long
constexpr int MAXN=1e5+10;

struct edge {
  int v,w;
};

struct node {
    int dis,u;
    bool operator>(const node& a) const{ 
        return dis>a.dis; 
    }
};

vector<vector<edge>> e(MAXN);  
int dis[MAXN], vis[MAXN];
priority_queue<node, vector<node>, greater<node>> q;

void dijkstra(int n, int s) {
    memset(dis, 0x3f, (n + 1) * sizeof(int));
    dis[s]=0;
    q.push({0, s});
    while(!q.empty()){
        int u=q.top().u;
        q.pop();
        if(vis[u])continue;
        vis[u] = 1;
        for(auto ed:e[u]){
            int v=ed.v,w=ed.w;
            if(dis[v]>dis[u]+w){
              dis[v]=dis[u]+w;
              q.push({dis[v],v});
            }
        }
    }
}

void solve(){

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t=1;cin>>t;
    while(t--){
        solve();
    }
    system("pause");
    return 0;
}