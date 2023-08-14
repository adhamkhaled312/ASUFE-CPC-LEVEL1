//https://atcoder.jp/contests/abc223/tasks/abc223_a?lang=en
#include <iostream>
using namespace std;
int main(){
int x;
cin>>x;
if(x==0){
    cout<<"No";
}
else if(x%100==0){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}
