//https://codeforces.com/problemset/problem/894/A
#include <iostream>
#include <cstring>
using namespace std;
int main(){
string s;
int ans=0;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]=='Q'){
        for(int j=i;j<s.length();j++){
            if(s[j]=='A'){
                for(int x=j;x<s.length();x++){
                    if(s[x]=='Q'){
                        ans++;
                    }
                }
            }
        }
    }
}
cout<<ans;
}
