//https://atcoder.jp/contests/abc298/tasks/abc298_a?lang=en
#include <iostream>
using namespace std;
int main(){
int n,good=0,poor=0;
string s;
cin>>n>>s;
for(int i=0;i<n;i++){
    if(s[i]=='o'){
        good++;
    }
    else if(s[i]=='x')
        poor++;
}
if(good>0&&poor==0){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}
