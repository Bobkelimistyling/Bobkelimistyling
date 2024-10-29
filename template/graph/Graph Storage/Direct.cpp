#include<bits/stdc++.h>
#define int long long
using namespace std;
//直接存边
struct edge{
    int u,v;
};

int n,m;
vector<edge> es;
vector<bool> vis;

bool find_edge(int u,int v){
    for(auto eg:es){
        if(eg.u==u&&eg.v==v){
            return true;
        }
    }
    return false;
}

void dfs(int u){
    if(vis[u])return;
    vis[u]=true;
    for(auto eg:es){
        if(eg.u==u){
            dfs(eg.v);
        }
    }
}

void solve(){
//由于直接存边的遍历效率低下，一般不用于遍历图。

//在 Kruskal 算法 中，由于需要将边按边权排序，需要直接存边。

//在有的题目中
//需要多次建图（如建一遍原图，建一遍反图）
//此时既可以使用多个其它数据结构来同时存储多张图
//也可以将边直接存下来，需要重新建图时利用直接存下的边来建图。
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