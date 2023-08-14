//https://codeforces.com/problemset/problem/1800/A
#include <iostream>
#include <string>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    string s,ans;
    cin>>s;
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            ans+=s[i];
        }
}
    if(ans=="meow")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
