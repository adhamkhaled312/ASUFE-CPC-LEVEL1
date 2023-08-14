//https://codeforces.com/problemset/problem/34/C
#include<bits/stdc++.h>
using namespace std;
int freq[1001];
int main()
{
    int x,j,i;
    string s,s1;
    char c;
    while(1)
    {
        scanf("%d%c", &x, &c);
        freq[x]++;
        if(c!=',')break;
    }
    int flag=0;
    for(int i=1;i<1001;i++)
    {
        j=i;
        if(freq[i]>0)
        {
            if(flag)cout<<",";

            while(freq[i]>0)i++;
            i--;
            if(i==j)cout<<i;
            else cout<<j<<"-"<<i;
            flag=1;
        }
    }

}
