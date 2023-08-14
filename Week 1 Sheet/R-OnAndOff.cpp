//https://atcoder.jp/contests/abc228/tasks/abc228_a?lang=en
#include <iostream>
#include<math.h>
using namespace std;
int main(){
int s,t,x;
cin>>s>>t>>x;
if(s<t){
    if(x>=s&&x<t){
        cout<<"Yes";
    }
    else{
        cout<<"No";
}
}

else{
    if(x>=s||x<t){
       cout<<"Yes";
       }
    else{
        cout<<"No";
    }
}
}

