//https://codeforces.com/problemset/problem/369/A
#include<iostream>
using namespace std;
int main(){
int n,m,k,ans;
cin>>n>>m>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        if(m>0){
            m--;
        }
        else{
            ans++;
        }
    }
    else if(a[i]==2){
        if(k>0){
            k--;
        }
        else if(m>0){
            m--;
        }
        else{
            ans++;
        }
    }
}
cout<<ans;
}


