#include<bits/stdc++.h>
#define int long long
using namespace std;

//本质上是用链表实现的邻接表
int n,m;
vector<bool> vis;
vector<int> head,nxt,to;
int cnt=-1;

void add(int u,int v){
    nxt.emplace_back(head[u]);//nxt[++cnt]=head[u];
    head[u]=to.size();        //head[u]=cnt;
    to.push_back(v);          //to[cnt]=v;
}


bool find_edge(int u,int v){
    for(int i=head[u];~i;i=nxt[i]){
        if(to[i]==v){
            return true;
        }
    }
    return false;
}

void dfs(int u){
    if(vis[u])return;
    vis[u]=1;
    //head[u]指向u的一个邻居的存储位置
    for(int i=head[u];~i;i=nxt[i]){
        //nxt[cnt]指向下一个节点的存储位置
        dfs(to[i]);
        //to[cnt]存储邻居节点编号
    }
}

void solve(){
    vis.resize(n+1,false);
    head.resize(n+1,-1);
//存各种图都很适合，但不能快速查询一条边是否存在，也不能方便地对一个点的出边进行排序。

//优点是边是带编号的，有时会非常有用
//如果 cnt 的初始值为奇数，存双向边时 i^1 即是 i 的反边（常用于 网络流）。
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