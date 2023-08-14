//https://codeforces.com/problemset/problem/443/A
#include <iostream>
using namespace std;
int main() {
int freqArr[26],ans=0;
string s;
getline(cin,s);
for(int i=0;i<26;i++){
    freqArr[i]=0;
}
for(int i=0;i<s.length();i++){
    if(s[i]>=97&&s[i]<=122){
        char currChar=s[i];
        int currNum=currChar-'a';
        freqArr[currNum]++;

    }
}

for(int i=0;i<26;i++){
    if(freqArr[i]>0){
        ans++;
    }
}
cout<<ans;
}
