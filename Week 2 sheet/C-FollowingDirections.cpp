//https://codeforces.com/problemset/problem/1791/B
#include<iostream>
using namespace std;
int main(){
int t,n,x,y;
cin>>t;
string s;
while(t--){
    cin>>n>>s;
    bool f=1;
    x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){y++;}
        else if(s[i]=='D'){y--;}
        else if(s[i]=='R'){x++;}
        else if(s[i]=='L'){x--;}
        if(x==1&&y==1){
            cout<<"YES\n";
            f=0;
            break;
        }
    }
    if(f){
        cout<<"NO\n";
    }
}
}
