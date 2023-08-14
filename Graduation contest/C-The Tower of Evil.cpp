//https://codeforces.com/gym/101028/problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
freopen("evil.in", "r", stdin);

int t,h,w,d;
cin>>t;
while(t--)
{
    cin>>h>>w>>d;
    int tempH=h,tempW=w;
    tempH--;
    tempW--;
    int noTimes=0;
    int ans;
    noTimes=tempH/tempW;
    tempH=tempH-noTimes*tempW;
    if(noTimes%2==0)
    {
        ans=tempH+1;
    }
    else
    {
        ans=w-tempH;
    }
    if(ans==d)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}

}
