//https://codeforces.com/problemset/problem/1006/B
#include <bits/stdc++.h>
using namespace std;
int arr[20001];
int indexes[20001];
bool comp(int x,int y){
return arr[x]>arr[y];
}
int main(){
    int n,k,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        indexes[i]=i;
    }
    sort(indexes+1,indexes+n+1,comp);
    for(int i=1;i<=k;i++){
        sum+=arr[indexes[i]];
    }
    cout<<sum<<endl;

    sort(indexes+1,indexes+k+1);
    for(int i=1;i<k;i++){
        cout<<indexes[i]-indexes[i-1]<< " ";
    }
    cout<<n-indexes[k-1];
}
