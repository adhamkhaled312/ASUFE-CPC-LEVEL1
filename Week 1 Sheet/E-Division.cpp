//https://codeforces.com/problemset/problem/1669/A
#include <iostream>
using namespace std;
int main(){
int t;
int x;
cin>>t;
while(t--){
    cin>>x;
    if(x>=1900){
        cout<<"DIVISION 1\n";
    }
    else if(x>=1600&&x<=1899){
        cout<<"DIVISION 2\n";
    }
    else if(x>=1400&&x<=1599){
        cout<<"DIVISION 3\n";
    }
    else{
        cout<<"DIVISION 4\n";
    }
}
return 0;
}

