//https://codeforces.com/problemset/problem/1363/B
#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int ones=0,zeros=0,doneOnes=0,doneZeros=0,ans=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]=='0'){zeros++;}
    if(s[i]=='1'){ones++;}
}
ans=min(zeros,ones);
for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
        zeros--;
        doneZeros++;
    }
    if(s[i]=='1'){
        ones--;
        doneOnes++;
        }
    ans=min(ans,min(zeros+doneOnes,ones+doneZeros));
}
cout<<ans<<endl;
}
return 0;
}
