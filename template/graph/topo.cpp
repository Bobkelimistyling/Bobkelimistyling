#include<bits/stdc++.h>
#define int long long
using namespace std;
constexpr int maxn=1e5+10;

int n,m;
vector<vector<int>> es(maxn);
int ind[maxn];//�洢ÿ���ڵ�����

bool topo(){
    vector<int> L;
    queue<int> S;
    for(int i=1;i<=n;++i){
        if(!ind[i]){
            S.push(i);
        }
    }
    while(!S.empty()){
        int u=S.front();
        S.pop();
        L.emplace_back(u);
        for(auto v:es[u]){
            if(--ind[v]==0){
                S.push(v);
            }
        }
    }
    if(L.size()==n){
        for(auto i:L){
            cout<<i<<" ";//�����������
            return true;
        }
    }
    return false;
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