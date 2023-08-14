//https://codeforces.com/problemset/problem/313/B
#include <iostream>
using namespace std;
int main(){
string s;
int m,l,r;
cin>>s>>m;
int arr[s.size()];
arr[0]=0;
for(int i=1;i<s.size();i++){
    arr[i]=arr[i-1];
    if(s[i-1]==s[i]){
        arr[i]++;
    }
}
while(m--){
    cin>>l>>r;
    cout<<arr[r-1]-arr[l-1]<<endl;
}
}
