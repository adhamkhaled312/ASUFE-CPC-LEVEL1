//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,x;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    while(q--){
        cin>>x;
        auto lower_itr=lower_bound(arr.begin(),arr.end(),x);
        auto upper_itr=upper_bound(arr.begin(),arr.end(),x);
        if(lower_itr==arr.end())
            cout<<arr[n-1];
        else{
            int index=lower_itr-arr.begin();
            index--;
            if(index<0)
                cout<<"X ";
            else
                cout<<arr[index]<<" ";
        }
        if(upper_itr==arr.end())
            cout<<" X";
        else
            cout<<*upper_itr;
        cout<<"\n";
    }
}
