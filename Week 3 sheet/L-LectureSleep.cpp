//https://codeforces.com/problemset/problem/961/B
#include <iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
long long int theormes[n],behavior[n],pref[n+1],temp=0;

for (int i=0;i<n;i++){
    cin>>theormes[i];
}
for (int i=0;i<n;i++){
    cin>>behavior[i];
    if(behavior[i]){
        temp+=theormes[i];
        theormes[i]=0;
    }
}
pref[0]=0;
for(int i=1;i<n+1;i++){
    pref[i]=pref[i-1]+theormes[i-1];
}
long long int temp2=0;
for(int i=n;i>=k;i--){

    temp2=max(temp2,pref[i]-pref[i-k]);
}
cout<<temp+temp2;
}

