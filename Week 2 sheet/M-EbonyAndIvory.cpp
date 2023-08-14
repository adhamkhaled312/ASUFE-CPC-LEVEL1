//https://codeforces.com/problemset/problem/633/A
#include <iostream>
using namespace std;
int main(){
int a,b,c,flag=0;
cin>>a>>b>>c;
for(int i=0;i<=c/a;i++){
    for(int j=0;j<=c/b;j++){
        if(i*a+j*b==c){
            flag=1;
            break;
        }
    }
}
if(flag==1){cout<<"Yes";}
else{cout<<"No";}
}
