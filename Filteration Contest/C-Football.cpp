//https://codeforces.com/problemset/problem/43/A
#include <iostream>
#include <cstring>
using namespace std;
int main(){
string firstTeam,temp,secondTeam;
int n,first=1,second=0;
cin>>n>>firstTeam;
for(int i=1;i<n;i++){
    cin>>temp;
    if(temp==firstTeam){
        first++;
    }
    else{
        secondTeam=temp;
        second++;
    }

}
if(first>second){
    cout<<firstTeam;
}
else{
    cout<<secondTeam;
}
}
