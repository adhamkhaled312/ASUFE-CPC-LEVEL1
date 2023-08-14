//https://cses.fi/problemset/task/1071
#include <iostream>
using namespace std;
int main(){
int t;
long long x,y,mx,diag;
cin>>t;
while(t--){
    cin>>x>>y;
    mx=max(x,y);
    diag=mx*(mx-1)+1;
    if(mx==x){
        if(x%2==0){
            cout<<diag+(x-y)<<endl;
        }
        else{
            cout<<diag-(x-y)<<endl;
        }
    }
    else{
        if(y%2==0){
            cout<<diag-(y-x)<<endl;
        }
        else{
            cout<<diag+(y-x)<<endl;
        }

    }
}
}
