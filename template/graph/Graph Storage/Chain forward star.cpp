#include<bits/stdc++.h>
#define int long long
using namespace std;

//��������������ʵ�ֵ��ڽӱ�
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
    //head[u]ָ��u��һ���ھӵĴ洢λ��
    for(int i=head[u];~i;i=nxt[i]){
        //nxt[cnt]ָ����һ���ڵ�Ĵ洢λ��
        dfs(to[i]);
        //to[cnt]�洢�ھӽڵ���
    }
}

void solve(){
    vis.resize(n+1,false);
    head.resize(n+1,-1);
//�����ͼ�����ʺϣ������ܿ��ٲ�ѯһ�����Ƿ���ڣ�Ҳ���ܷ���ض�һ����ĳ��߽�������

//�ŵ��Ǳ��Ǵ���ŵģ���ʱ��ǳ�����
//��� cnt �ĳ�ʼֵΪ��������˫���ʱ i^1 ���� i �ķ��ߣ������� ����������
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