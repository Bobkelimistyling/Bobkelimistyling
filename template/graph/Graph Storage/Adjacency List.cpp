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
//�����ͼ�����ʺ�
//������������������Ҫ���ٲ�ѯһ�����Ƿ���ڣ��ҵ������٣�����ʹ���ڽӾ��󣩡�

//������������Ҫ��һ��������г��߽�������ĳ��ϡ�
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