//https://codeforces.com/problemset/problem/1788/A
#include <iostream>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t){
    int two=0;
    t--;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){two++;}
    }
    if(two==0){
        cout<<1<<endl;
        continue;
    }
    if(two%2!=0){
        cout<<-1<<endl;
        continue;
    }
    two/=2;
    for(int i=0;i<n;i++){
        if(a[i]==2){two--;}
        if(two==0){
            cout<<i+1<<endl;
            break;
        }
    }
}
}
