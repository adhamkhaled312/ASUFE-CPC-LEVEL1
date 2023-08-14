//https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include<math.h>
using namespace std;
int main(){
long long int n,m,a,ans;
cin>>n>>m>>a;
ans=ceil(double(n)/a)*ceil(double(m)/a);
cout<<ans;
return 0;
}

