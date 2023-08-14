//https://codeforces.com/problemset/problem/1767/B
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
long long n;
cin>>t;
while (t--){
    cin>>n;
    long long arr[n],ans;
    for(int i=0;i<n;i++)cin>>arr[i];
    ans=arr[0];
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]>ans){
            if((arr[i]+ans)%2==0)
                ans=(arr[i]+ans)/2;
            else
                ans=(arr[i]+ans)/2+1;

        }
    }
    cout<<ans<<"\n";
}
}
