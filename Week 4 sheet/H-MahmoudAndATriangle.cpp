//https://codeforces.com/problemset/problem/766/B
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
bool flag=false;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n-2;i++){
    if(arr[i]+arr[i+1]>arr[i+2]){
        flag=true;
        break;
    }
}
if(flag)cout<<"YES";
else cout<<"NO";
}
