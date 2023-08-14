//https://codeforces.com/problemset/problem/63/A
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<string>rats;
vector<string>wandc;
vector<string>men;
string name,rule,captin;
for(int i=0;i<n;i++){
    cin>>name>>rule;
    if(rule=="rat") rats.push_back(name);
    else if(rule=="woman"||rule=="child") wandc.push_back(name);
    else if(rule=="man")men.push_back(name);
    else captin=name;
}
for(int i=0;i<rats.size();i++){
    cout<<rats[i]<<endl;
}
for(int i=0;i<wandc.size();i++){
    cout<<wandc[i]<<endl;
}
for(int i=0;i<men.size();i++){
    cout<<men[i]<<endl;
}
cout<<captin;
}
