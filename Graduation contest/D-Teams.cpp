//https://codeforces.com/gym/101028/problem/E
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b%a,a);
}
int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);

    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t,n;
cin>>t;
while(t--)
{
    int sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int members=findGCD(arr,n);
    cout<<members<<" ";
    int teams=sum/members;
    cout<<teams<<"\n";
}
}
