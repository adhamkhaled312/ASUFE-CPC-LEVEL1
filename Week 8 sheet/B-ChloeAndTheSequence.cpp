//https://codeforces.com/contest/743/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k;
    cin>>n>>k;
    long long start=1;
    long long endd=1;
    long long mid;
    for(int i=0;i<n;i++){
        endd=endd*2;
    }
    mid=(start+endd)/2;
    while(start<=endd){
        if(n==1||mid==k){
            break;
        }
        else if(k<mid){
            endd=mid-1;
            mid=(start+endd)/2;
            n--;
        }
        else{
            start=mid+1;
            mid=(start+endd)/2;
            n--;
        }
    }
    cout<<n;
}
