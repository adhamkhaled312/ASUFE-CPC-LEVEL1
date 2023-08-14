//https://codeforces.com/problemset/problem/474/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,m;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        if(i==0){
            cin>>vec[i];
        }
        else{
            cin>>temp;
            vec[i]=vec[i-1]+temp;
        }
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp;
        auto it=lower_bound(vec.begin(),vec.end(),temp);
        int index=it-vec.begin();
        if(temp>vec[n-1])
            cout<<index<<endl;
        else
            cout<<index+1<<endl;
        }
}
