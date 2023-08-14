//https://codeforces.com/problemset/problem/4/C
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
    map<string,int>mp;
    set<string>st;
while (n--){
    string s;
    cin>>s;
    if(st.find(s)==st.end()){
        cout<<"OK\n";
        st.insert(s);
        mp[s]++;
    }
    else{
        cout<<s<<mp[s]<<"\n";
        mp[s]++;

    }
}
}
