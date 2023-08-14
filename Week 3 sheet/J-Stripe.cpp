//https://codeforces.com/problemset/problem/18/C
#include <iostream>
using namespace std;
int main(){
int n,ans=0;
cin>>n;
int arr[n],prefix[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
    }
prefix[0]=0;
for(int i=1;i<n+1;i++){
    prefix[i]=prefix[i-1]+arr[i-1];
}

if(n==2){
    if(arr[0]==arr[1]){
        ans++;
    }
}
else{
for(int i=1;i<n;i++){
    if((prefix[n]-prefix[i])==prefix[i]){
        ans++;
    }
}
}
cout<<ans;
}
