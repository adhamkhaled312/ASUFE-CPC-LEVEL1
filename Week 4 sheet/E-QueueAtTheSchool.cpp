//https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>n>>t;
char s[n];
cin>>s;
while(t--){
    char temp;
    for(int i=0;i<n-1;i++){
        if(s[i]=='B'&&s[i+1]=='G'){
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }
    }
}
cout<<s;
}
