//https://codeforces.com/contest/1799/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>res(n+1,-1),temp(n+m+1);
    int pos=n;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(pos>0&&!temp[x]){
            res[pos]=i+1;
            pos--;
        }
        temp[x]++;
    }
    for(int i=1;i<res.size();i++){
        cout<<res[i]<< " " ;
    }
    cout<<endl;
}
}
