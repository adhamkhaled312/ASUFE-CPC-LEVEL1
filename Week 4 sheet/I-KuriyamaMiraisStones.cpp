//https://codeforces.com/contest/433/problem/B
#include <bits/stdc++.h>
using namespace std;
long long int v[1000000];
long long int u[1000000];
long long int prefixV[1000000];
long long int prefixU[1000000];
int main(){
int n,m;
cin>>n;
for (int i=0;i<n;i++){
    cin>>v[i];
    u[i]=v[i];
}
sort(u,u+n);
for (int i=1;i<n+1;i++){
    prefixV[i]=prefixV[i-1]+v[i-1];
    prefixU[i]=prefixU[i-1]+u[i-1];
}
cin>>m;
while(m--){
    int type,l,r;
    cin>>type>>l>>r;
    if(type==1){
        cout<<prefixV[r]-prefixV[l-1]<<endl;
    }
    else{
        cout<<prefixU[r]-prefixU[l-1]<<endl;
    }
}
}
