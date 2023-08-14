//https://cses.fi/problemset/task/1069
#include <iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n=0,maxn=0;
for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
        n++;
    }
    else{
        if(n>maxn){
            maxn=n;
        }
        n=0;
    }
}
cout<<maxn+1;
}
