//https://codeforces.com/problemset/problem/570/C
#include <iostream>
using namespace std;
int main(){
int n,m,i,ans=0;
cin>>n>>m;
char x;
string s;
cin>>s;
for(int j=0;j<n;j++){
    if(s[j]=='.'&&s[j+1]=='.'){
        ans++;
        }
    }
while(m){
    m--;
    cin>>i>>x;
    if(s[i-1]!='.'&&x=='.'){
        if(s[i-2]=='.'){ans++;}
        if(s[i]=='.'){ans++;}
    }
    if(s[i-1]=='.'&&x!='.'){
        if(s[i-2]=='.'){ans--;}
        if(s[i]=='.'){ans--;}
    }
    s[i-1]=x;
    cout<<ans<<endl;

}
}
