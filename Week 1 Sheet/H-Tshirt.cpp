//https://atcoder.jp/contests/abc242/tasks/abc242_a?lang=en
#include <iostream>
using namespace std;
int main(){
double a,b,c,x,ans;
cin>>a>>b>>c>>x;
if(x<=a){
    ans=1;
}
else if(x>=(a+1)&&x<=b){
    ans=c/(b-a);
}
else{
    ans=0;
}
cout<<ans;
}

