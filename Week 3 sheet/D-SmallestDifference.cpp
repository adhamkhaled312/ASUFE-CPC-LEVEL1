//https://codeforces.com/gym/101853/problem/J
#include <iostream>
using namespace std;
int main() {
int t,n,ans;
cin>>t;
while(t--){
    cin>>n;
    int freqArr[10001]={0};
    ans=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freqArr[arr[i]]++;
    }
    for(int i=0;i<10001;i++){
        ans=max(ans,freqArr[i]+freqArr[i+1]);
    }
    cout<<ans<<endl;
}
}
