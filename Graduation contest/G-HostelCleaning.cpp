//https://codeforces.com/gym/103785/problem/E
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,k;
cin>>n>>k;
long long arr[n];
long long temp[k];
for(int i=0;i<k;i++)
{
    temp[i]=0;
}
long long ans=LONG_MAX;
for(int i=0;i<n;i++)
{
     cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    temp[i%k]+=arr[i];
}
sort(temp,temp+k);
ans=temp[0];
cout<<ans;
}
