//https://codeforces.com/gym/104289/problem/A
#include <iostream>
#include <cstring>
using namespace std;
int main(){
string s;
int t,freqArr[2];
cin>>t;
while(t--){
    freqArr[0]=0;
    freqArr[1]=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            freqArr[0]++;
        }
        else{
            freqArr[1]++;
        }
    }
    if(freqArr[0]==freqArr[1]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

}
