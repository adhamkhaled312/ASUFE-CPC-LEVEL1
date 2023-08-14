//https://cses.fi/problemset/result/5978442/
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
long long temp=INT_MIN,ans=INT_MIN;
cin>>n;
long long arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    temp=max(arr[i],temp+arr[i]);
    ans=max(ans,temp);
}
cout<<ans;
}
