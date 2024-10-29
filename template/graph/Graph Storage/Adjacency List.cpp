#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
vector<bool> vis;
vector<vector<int>> es;

bool find_edge(int u,int v){
    for(auto to:es[u]){
        if(to==v){
            return true;
        }
    }
    return false;
}

void dfs(int u){
    if(vis[u])return;
    vis[u]=true;
    for(auto v:es[u]){
        dfs(v);
    }
}

void solve(){
//存各种图都很适合
//除非有特殊需求（如需要快速查询一条边是否存在，且点数较少，可以使用邻接矩阵）。

//尤其适用于需要对一个点的所有出边进行排序的场合。
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