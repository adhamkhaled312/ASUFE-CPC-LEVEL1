//https://codeforces.com/problemset/problem/546/C
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,n1,n2,x,counter=0,winner;
    bool flag= true;
    cin>>n;
    queue<int>first,second;
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>x;
        first.push(x);
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>x;
        second.push(x);
    }
    while(flag||counter>200){
        if(counter>200){
            break;
        }
        if(first.empty()){
            winner=2;
            flag=false;
        }
        else if(second.empty()){
            winner=1;
            flag=false;
        }
        else if(first.front()>second.front()){
            first.push(second.front());
            first.push(first.front());
            first.pop();
            second.pop();
            counter++;
        }
        else if(first.front()<second.front()){
            second.push(first.front());
            second.push(second.front());
            first.pop();
            second.pop();
            counter++;
        }
    }
    if(flag)cout<<-1;
    else
    cout<<counter<<" " <<winner;
}

