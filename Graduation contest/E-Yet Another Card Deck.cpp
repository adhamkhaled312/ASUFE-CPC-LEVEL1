//https://codeforces.com/problemset/problem/1511/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,q;
cin>>n>>q;
vector<int> cards(n);
for(int i=0;i<n;i++)
{
    cin>>cards[i];
}
int x;
while (q--)
{
    cin>>x;
    auto it=find(cards.begin(),cards.end(),x);
    int index=it-cards.begin();
    cout<<index+1<<" ";
    rotate(cards.begin(),cards.begin()+index,cards.begin()+index+1);

}
}
