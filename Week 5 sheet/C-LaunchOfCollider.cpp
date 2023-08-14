//https://codeforces.com/contest/699/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,ans=INT_MAX,temp=0;
bool flag=true;
cin>>n;
char c;
vector<pair<int,char>> v(n);
for(int i=0;i<n;i++){
    cin>>v[i].second;
}
for(int i=0;i<n;i++){
    cin>>v[i].first;
}
for(int i=1;i<n;i++){
    if(v[i].second=='L'&&v[i-1].second=='R'){
        temp=(v[i].first-v[i-1].first)/2;
        ans=min(ans,temp);
        flag=false;
    }
}
if(flag)cout<<-1;
else cout<<ans;
}
