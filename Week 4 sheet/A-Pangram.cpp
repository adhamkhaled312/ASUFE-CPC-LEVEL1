/*
https://codeforces.com/problemset/problem/520/A
*/
#include <iostream>
#include <cstring>
using namespace std;
int freq[26];
int main(){
int n,flag=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if (isupper(s[i]))freq[s[i]-'A']++;
    else freq[s[i]-'a']++;
}
for(int i=0;i<26;i++){
    if(freq[i]==0){
        flag++;
        break;
    }
}
if(flag){
    cout<<"NO";
}
else{
    cout<<"YES";
}
}
