//https://codeforces.com/problemset/problem/911/A
#include <bits/stdc++.h>
using namespace std;
 int arr[1000000];
 int index[1000000];
bool sortt(int x,int y){
    if(arr[x]<arr[y]){
        return 1;
    }
    else if(arr[x]>arr[y]){
        return 0;
    }
    else{
        return x<y;
    }
;
}
int main(){
int n;
cin>>n;
for (int i=0;i<n;i++){
    cin>>arr[i];
    index[i]=i;
}
sort(index,index+n,sortt);
int temp=0,ans=INT_MAX;
for(int i=1;i<n;i++){
    if(arr[index[i]]==arr[index[i-1]]){
        temp=index[i]-index[i-1];
        ans=min(temp,ans);
    }
    else{
        break;
    }
}
cout<<ans;
}
