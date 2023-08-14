//https://codeforces.com/problemset/problem/208/A
#include <iostream>
#include <cstring>
using namespace std;
int main(){
string s;
char a[200];
cin>>s;
int i=0,j=0;
while(i<s.size()){
    if(s.substr(i,3)=="WUB"){
        i+=3;
        if(j!=0){
           a[j]=' ';
           j++;
        }
        continue;

    }
    a[j]=s[i];
    j++;
    i++;
}
for(int x=0;x<j;x++){
    cout<<a[x];
}
}
