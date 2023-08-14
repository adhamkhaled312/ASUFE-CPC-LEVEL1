//https://codeforces.com/problemset/problem/681/C
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    string s;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> p;
    queue<string> ans;
    for(int i=0;i<n;i++){

        cin>>s;
        if(s=="insert"){
            cin>>x;
            p.push(x);
            ans.push("insert "+to_string(x));
        }
        else if(s=="removeMin"){
            if(p.empty()){
                p.push(1);
                ans.push("insert 1");
            }
            p.pop();
            ans.push("removeMin");

        }
        else if(s=="getMin"){
            cin>>x;
            while(!p.empty()&&p.top()<x){
                p.pop();
                ans.push("removeMin");
            }
            if(p.empty()||p.top()>x){
                p.push(x);
                ans.push("insert "+to_string(x));
            }
            ans.push("getMin "+ to_string(x));
        }
    }
    cout<<ans.size()<<"\n";
    while(!ans.empty()){
        cout<<ans.front()<<"\n";
        ans.pop();
    }
    }
