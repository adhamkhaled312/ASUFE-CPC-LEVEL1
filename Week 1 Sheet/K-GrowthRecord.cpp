//https://atcoder.jp/contests/abc259/tasks/abc259_a?lang=en
#include <iostream>
using namespace std;
int main(){
int n,m,x,t,d;
cin>>n>>m>>x>>t>>d;
if(m>=x){
    cout<<t;
}
else{
    t=t-((x-m)*d);
    cout<<t;
}
}

