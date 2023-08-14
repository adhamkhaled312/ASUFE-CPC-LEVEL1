#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,q;
cin>>n>>q;
int arr[n];
int ones;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]==1)
        ones++;
}
while(q--)
{
    int x;
    cin>>x;
    int i;
    if(x==1)
    {
        cin>>i;
        if(arr[i-1]==0)
            ones++;
        else
            ones--;
        arr[i-1]=1-arr[i-1];
    }
    else if(x==2)
    {
        cin>>i;
        if(i<=ones)
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
    }
}
}
