//https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,x;
cin>>n>>m;
queue<pair<int,int>>q;
for(int i=1;i<=n;i++){
    cin>>x;
    q.push({x,i});
}
int i=0;
while(q.size()>1){
    if(q.front().first<=m)
        q.pop();
    else if(q.front().first>m){
        q.push({q.front().first-m,q.front().second});
        q.pop();
    }
}
cout<<q.front().second;
}

