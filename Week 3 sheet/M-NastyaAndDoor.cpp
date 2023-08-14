//https://codeforces.com/problemset/problem/1341/B
#include <iostream>
using namespace std;
int main(){
int t,n,k;
cin>>t;
while(t--){
    cin>>n>>k;
    int arr[n],prefix[n-1],l=1,p=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefix[0]=0;
    for(int i=1;i<n-1;i++){
        prefix[i]=prefix[i-1];
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            prefix[i]++;
        }
    }
    for(int i=0;i<n-k+1;i++){
        if(prefix[i+k-2]-prefix[i]>p){
            l=i+1;
            p=prefix[i+k-2]-prefix[i];
        }
    }
    p++;
    cout<<p<<" "<<l<<endl;
}
}

