//https://codeforces.com/problemset/problem/225/A
#include <iostream>
using namespace std;
int main(){
int n,x,a,b,flag=0;
cin>>n>>x;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a==x||b==x||a==(7-x)||b==(7-x)){
        flag++;
    }
}
if(flag==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
