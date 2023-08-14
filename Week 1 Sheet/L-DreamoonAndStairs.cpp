//https://codeforces.com/problemset/problem/476/A
#include <iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
if(n<m){
    cout<<-1;
    return 0;
}
int t;
if(n%2==0){
    t=n/2;
}
else{
    t=(n/2)+1;
}
for(int i=t;i<n;i++){
    if(t%m==0){
        break;
        }
    t++;
    }
cout<<t;
}
