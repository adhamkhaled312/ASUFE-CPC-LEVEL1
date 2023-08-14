//https://codeforces.com/contest/1800/problem/C2
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long int sum=0;
    priority_queue<long long int>pq;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        if(x>0){
            pq.push(x);
        }
        else{
            if(!pq.empty()){
                sum+=pq.top();
                pq.pop();
            }
        }
    }
    cout<<sum<<endl;

}
}
