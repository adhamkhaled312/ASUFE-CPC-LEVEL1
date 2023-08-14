//https://www.codechef.com/problems/PLAYSTR
#include <iostream>
using namespace std;
int main() {
int t,n;
string s,r;
int freqArrS[2],freqArrR[2];
cin>>t;
while(t--){
    cin>>n;
    freqArrR[0]=0;freqArrR[1]=0;
    freqArrS[0]=0;freqArrS[1]=0;
    cin>>s>>r;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){freqArrS[0]++;}
        if(s[i]=='1'){freqArrS[1]++;}
        if(r[i]=='0'){freqArrR[0]++;}
        if(r[i]=='1'){freqArrR[1]++;}

    }
    if(freqArrR[0]==freqArrS[0]&&freqArrR[1]==freqArrS[1]){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
}
