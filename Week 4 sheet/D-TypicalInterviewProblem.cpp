//https://codeforces.com/contest/1796/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
int i = 1;
while(s.size() < 100)
{
    if(i % 3 == 0) s += "F";
    if(i % 5 == 0) s += "B";
    i++;
}
string s1;
int t,n;
cin>>t;
while(t--){
    cin>>n>>s1;
    bool flag=false;
    for(int i=0;i<s.size()-n;i++){
    if(s.substr(i,n)==s1)flag=true;
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
}
