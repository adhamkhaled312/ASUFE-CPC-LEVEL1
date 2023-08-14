//https://codeforces.com/problemset/problem/1157/C1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,lastElement=-1;
    cin>>n;
    deque<int>temp;
    vector<char>dir;
    int x;
    int ans=0;
    while(n--)
    {
        cin>>x;
        temp.push_back(x);
    }
    while(!temp.empty()){
        if(temp.front()>lastElement&&temp.back()>lastElement){
            if(temp.front()<temp.back()){
                lastElement=temp.front();
                temp.pop_front();
                ans++;
                dir.push_back('L');
            }
            else{
                lastElement=temp.back();
                temp.pop_back();
                ans++;
                dir.push_back('R');
            }
        }
        else if(temp.front()>lastElement){
                lastElement=temp.front();
                temp.pop_front();
                ans++;
                dir.push_back('L');
            }
        else if(temp.back()>lastElement){
                lastElement=temp.back();
                temp.pop_back();
                ans++;
                dir.push_back('R');
        }
        else
            break;
        }
    cout<<ans<<endl;
    for(auto i:dir)
    {
        cout<<i;
    }
}

