//https://codeforces.com/problemset/problem/253/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int minn=INT_MAX;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        auto upper=upper_bound(vec.begin(),vec.end(),2*vec[i]);
        int index=upper-vec.begin();
        minn=min(minn,i+n-index);
    }
    cout<<minn;
    }

