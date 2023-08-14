//https://codeforces.com/problemset/problem/393/A
#include <iostream>
using namespace std;
int main() {
int ans=0;
bool firstLoop=true;
string s;
cin>>s;
int freqArr[26];
for(int i=0;i<26;i++){freqArr[i]=0;}
for(int i=0;i<s.size();i++){
    freqArr[s[i]-'a']++;
}
while(1){
    if(firstLoop){
    if(freqArr[13]<3||freqArr[8]<1||freqArr[19]<1||freqArr[4]<3){
        break;
    }
    freqArr[13]-=3;
    freqArr[8]-=1;
    freqArr[19]-=1;
    freqArr[4]-=3;
    ans++;
    firstLoop=false;
    }
    else{
        if(freqArr[13]<2|freqArr[8]<1||freqArr[19]<1||freqArr[4]<3){
        break;
    }
    freqArr[13]-=2;
    freqArr[8]-=1;
    freqArr[19]-=1;
    freqArr[4]-=3;
    ans++;
    }
}
cout<<ans;
}
