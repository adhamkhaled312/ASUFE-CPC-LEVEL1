//https://codeforces.com/problemset/problem/1550/B
#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n,a,b;
cin>>t;
while(t--){
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int x=unique(s.begin(),s.end())-s.begin();
    cout<<a*n+max(n*b,(x/2 +1)*b )<<endl;
}
}
