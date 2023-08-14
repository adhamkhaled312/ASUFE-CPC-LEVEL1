//https://codeforces.com/contest/1584/problem/C
#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    bool flag=true;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]&&b[i]!=a[i]+1){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
}
