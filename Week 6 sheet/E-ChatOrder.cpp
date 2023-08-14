//https://codeforces.com/problemset/problem/637/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string>temp;
    int n;
    cin>>n;
    string s;
    stack<string>st;
    for(int i=0;i<n;i++){
        cin>>s;
        st.push(s);
    }
    for(int i=0;i<n;i++){
        if(temp.find(st.top())==temp.end()){
            cout<<st.top()<<"\n";
            temp.insert(st.top());

        }
            st.pop();
    }
}
