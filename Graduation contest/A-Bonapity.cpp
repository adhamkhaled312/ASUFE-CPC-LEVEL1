//https://codeforces.com/gym/101028/problem/B
#include<bits/stdc++.h>
using namespace std;
int freq[26];
string correcter(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
        if(s[i]=='p')
        {
            s[i]='b';
        }
        if(s[i]=='i')
        {
            s[i]='e';
        }
    }
    return s;

}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
string s1,s2;
while(t--){
        int flag=0;
        cin>>s1>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"No\n";
        continue;
    }
    s1=correcter(s1);
    s2=correcter(s2);
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            flag++;
        }
    }
    if(flag)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
    }
}
}


