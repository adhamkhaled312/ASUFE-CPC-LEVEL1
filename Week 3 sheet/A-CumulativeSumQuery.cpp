//https://vjudge.net/contest/547197#overview
#include <iostream>
using namespace std;
int main(){
int n,q,l,r;
cin>>n;
int arr[n],prefix[n+1];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
prefix[0]=0;
for(int i=1;i<n+1;i++){
    prefix[i]=prefix[i-1]+arr[i-1];
}
cin>>q;
while(q){
    q--;
    cin>>l>>r;
    cout<<prefix[r+1]-prefix[l]<<endl;
}
}
