#include<bits/stdc++.h>
#define int long long
using namespace std;
//ֱ�Ӵ��
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
//����ֱ�Ӵ�ߵı���Ч�ʵ��£�һ�㲻���ڱ���ͼ��

//�� Kruskal �㷨 �У�������Ҫ���߰���Ȩ������Ҫֱ�Ӵ�ߡ�

//���е���Ŀ��
//��Ҫ��ν�ͼ���罨һ��ԭͼ����һ�鷴ͼ��
//��ʱ�ȿ���ʹ�ö���������ݽṹ��ͬʱ�洢����ͼ
//Ҳ���Խ���ֱ�Ӵ���������Ҫ���½�ͼʱ����ֱ�Ӵ��µı�����ͼ��
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