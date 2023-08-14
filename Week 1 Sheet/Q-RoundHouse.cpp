//https://codeforces.com/problemset/problem/659/A
#include <iostream>
#include<math.h>
using namespace std;
int main(){
int n,a,b,t;
cin>>n>>a>>b;
b=b%n;
if(b==0){
    cout<<a;
}
else{
t=(a+b)%n;
if(t==0){
    cout<<n;
}
else{
    cout<<(t+n)%n;
}
}
}
