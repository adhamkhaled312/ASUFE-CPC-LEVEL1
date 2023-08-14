//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614
#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
cin.ignore();
while(t--){
    bool flag=true;
    string s;
    getline(cin,s);
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='[')st.push(s[i]);
        else if(s[i]==')'){
            if(st.empty()||st.top()!='('){
                flag=false;
                break;
               }
            else st.pop();
        }
        else if(s[i]==']'){
            if(st.empty()||st.top()!='['){
                flag=false;
                break;

               }
            else st.pop();
        }
    }
    if(!st.empty()) flag=false;
    if(flag)cout<<"Yes\n";
    else cout<<"No\n";
}
}
