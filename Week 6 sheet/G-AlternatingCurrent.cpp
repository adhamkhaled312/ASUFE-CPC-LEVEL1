//https://codeforces.com/contest/343/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
long long n=s.size();
stack<char> st;
for(int i=0;i<n;i++){
    if(st.empty()){
        st.push(s[i]);
        continue;
    }

    if(st.top()==s[i])
        st.pop();
    else
        st.push(s[i]);
}

if(st.empty()) cout<<"Yes"<<endl;
else cout<<"No"<<endl;

}
