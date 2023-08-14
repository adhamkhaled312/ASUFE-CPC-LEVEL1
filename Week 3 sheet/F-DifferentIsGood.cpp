//https://codeforces.com/problemset/problem/672/B
#include <iostream>
using namespace std;
int main() {
int n,ans=0,availableChar=0;
string s;
cin>>n>>s;
int freqArr[26];
for(int i=0;i<26;i++){freqArr[i]=0;}
for(int i=0;i<n;i++){
    freqArr[s[i]-'a']++;
}
for(int i=0;i<26;i++){
        if(freqArr[i]==0){availableChar++;}
        else{ans+=freqArr[i]-1;}
    }

if (availableChar<ans){
    cout<<-1;
}
else {
    cout<<ans;
}
}
