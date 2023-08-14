//https://codeforces.com/problemset/problem/816/B
#include <iostream>
using namespace std;
int freq[2000001];
int pref[2000001];
int prefMod[2000001];
int main(){
int n,k,q,l,r,a,b;
cin>>n>>k>>q;
while(n--){
    cin>>l>>r;
    freq[l]++;
    freq[r+1]--;
}
for(int i=1;i<2000001;i++){
    pref[i]=pref[i-1]+freq[i];
}
for(int i=1;i<2000001;i++){
prefMod[i]=prefMod[i-1]+(pref[i]>=k);
}
while(q--){
    int ans=0;
    cin>>a>>b;
    cout<<prefMod[b]-prefMod[a-1]<<endl;
}
}
