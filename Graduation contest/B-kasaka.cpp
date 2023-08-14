//https://atcoder.jp/contests/abc237/tasks/abc237_c?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
string s;
cin>>s;
int n=s.size();
int astart=0,aend=0;
for(int i=0;i<n;i++){
    if(s[i]=='a')
        astart++;
    else
        break;
}
for(int i=n-1;i>=0;i--){
    if(s[i]=='a')
        aend++;
    else
        break;
}
if(astart>aend){
    cout<<"No";
}
else{
    int a=aend-astart;
    int flag=0;
    n=n-a;
    for(int i=astart;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
        {
            flag++;
        }
    }
    if(flag)
        cout<<"No";
    else
        cout<<"Yes";
}
}


