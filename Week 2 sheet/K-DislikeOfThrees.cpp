//https://codeforces.com/problemset/problem/1560/A
#include <iostream>
using namespace std;
int main(){
long long int arr[1000],n=0,x=1,k;
bool flag=1;
while(flag){
    if(x%3==0||(x-3)%10==0){
        x++;
        continue;
    }
    arr[n]=x;
    n++;
    x++;
    if(n==1000){flag=0;}

}
int t;
cin>>t;
while(t){
    t--;
    cin>>k;
    cout<<arr[k-1]<<endl;

}
}