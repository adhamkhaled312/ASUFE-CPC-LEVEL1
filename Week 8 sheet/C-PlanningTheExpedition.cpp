//https://codeforces.com/problemset/problem/1011/B
#include<bits/stdc++.h>
using namespace std;
vector<int>freqArr(101);
int main()
{
    int n,packages,ans,x;
    cin>>n>>packages;
    if(packages<n)
    {
        cout<<0;
    }
    else
    {
        for(int i=0;i<packages;i++)
        {
            cin>>x;
            freqArr[x]++;
        }
        for(int i=100;i>=1;i--)
        {
            vector<int>temp(freqArr);
            ans=0;
            for(int j=1;j<=100;j++)
            {
                while(temp[j]>=i)
                {
                    ans++;
                    temp[j]-=i;
                }
            }
            if(ans>=n)
            {
                cout<<i;
                break;
            }

        }

        }
}

