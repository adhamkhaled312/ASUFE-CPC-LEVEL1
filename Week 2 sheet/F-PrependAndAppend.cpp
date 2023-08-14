//https://codeforces.com/problemset/problem/1791/C
#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int t,n;
cin>>t;
while(t--){
    cin>>n>>s;
    int temp=n-1,ans=n;;

    for(int i=0;i<n;i++){
        if(i>temp){
            cout<<0<<endl;
            break;
        }
        if(s[i]!=s[temp]){

            temp--;
            ans-=2;

        }
        else{
            cout<<ans<<endl;
            break;
        }




}
}
}
