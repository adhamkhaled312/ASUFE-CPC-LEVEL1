//https://codeforces.com/problemset/problem/318/B
#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cin>>s;
long long int counter=0,answer=0;
for(int i=0;i<s.size();i++){
    if(s.substr(i,5)=="heavy")
        counter++;
    if(s.substr(i,5)=="metal")
        answer+=counter;
}
cout<<answer;

}
