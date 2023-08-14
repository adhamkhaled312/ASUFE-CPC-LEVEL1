//https://codeforces.com/problemset/problem/300/A
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int>pos,neg,zero;
for(int i=0;i<n;i++){
    if(arr[i]==0)zero.push_back(arr[i]);
    else if(arr[i]>0){
        pos.push_back(arr[i]);
    }
    else{
        neg.push_back(arr[i]);
    }
}
if(pos.size()==0){
    pos.push_back(neg[neg.size()-1]);
    neg.pop_back();
    pos.push_back(neg[neg.size()-1]);
    neg.pop_back();
}
if(neg.size()%2==0){
    zero.push_back(neg[neg.size()-1]);
    neg.pop_back();
}

cout<<neg.size()<<" ";
for(int i=0;i<neg.size();i++){
    cout<<neg[i]<<" ";
}
cout<<endl;
cout<<pos.size()<<" ";
for(int i=0;i<pos.size();i++){
    cout<<pos[i]<<" ";
}
cout<<endl;
cout<<zero.size()<<" ";
for(int i=0;i<zero.size();i++){
    cout<<zero[i]<<" ";
}
}
