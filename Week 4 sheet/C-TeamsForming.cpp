//https://codeforces.com/problemset/problem/1092/B
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,ans=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n;i+=2){
    ans+=arr[i+1]-arr[i];
}
cout<<ans;
}
