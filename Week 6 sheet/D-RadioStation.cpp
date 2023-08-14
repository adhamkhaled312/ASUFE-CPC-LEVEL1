//https://codeforces.com/problemset/problem/918/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,string>mp;
    int n,m;
    cin>>n>>m;
    string name,ip,command;
    for(int i=0;i<n;i++){
        cin>>name>>ip;
        mp[ip+';']=name;
    }
    for (int i=0;i<m;i++){
        cin>>command>>ip;
        cout<<command<<" "<<ip<<" "<<'#'<<mp[ip]<<"\n";
    }
}

