//https://codeforces.com/gym/104168/problem/C3
#include <iostream>
using namespace std;
int main(){
long long int t,n,sum;
cin>>t;
while(t--){
    cin>>n;
    sum=0;
    long long int arr[n],prefix[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefix[0]=0;
    for(int i=1;i<n+1;i++){
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    for(int i=0;i<n-1;i++){
        sum+=arr[i]*(prefix[n]-prefix[i+1]);
    }
    cout<<sum<<endl;

}


}

