//https://atcoder.jp/contests/abc293/tasks/abc293_b?lang=en
#include <iostream>
using namespace std;
int main(){
int n,x,num=0;
cin>>n;
int arr[n],arr2[n];
for(int i=0;i<n;i++){
    arr[i]=1;
}
for(int i=0;i<n;i++){
    cin>>x;
    if(arr[i]==1){
    arr[x-1]--;
}
}
for(int i=0;i<n;i++){
    if(arr[i]==1){
        num++;
    }
}
cout<<num<<endl;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        cout<<i+1<<" ";
    }
}
}
