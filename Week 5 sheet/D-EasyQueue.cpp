//https://www.spoj.com/problems/QUEUEEZ/en/
#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
long long n,x;
queue<long long> q;
while(t--){
    cin>>n;
    if(n==1){
        cin>>x;
        q.push(x);
    }
    else if(n==2){
        if(!q.empty()){
            q.pop();
    }
    }
    else{
        if(!q.empty()){
            cout<<q.front()<<'\n';
        }
        else{
            cout<<"Empty!"<<'\n';
        }
}
}
}
