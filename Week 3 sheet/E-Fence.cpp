//https://codeforces.com/problemset/problem/363/B
#include <iostream>
using namespace std;
int main() {
int n,k,ans=99999999,ansIndex,x;
cin>>n>>k;
int arr[n],preSum[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
preSum[0]=0;
for(int i=1;i<n+1;i++){
    preSum[i]=preSum[i-1]+arr[i-1];
}
for(int i=k;i<n+1;i++){
    x=preSum[i]-preSum[i-k];
    if(x<ans){
        ansIndex=i-k+1;
        ans=x;
    }
}
cout<<ansIndex;
}
