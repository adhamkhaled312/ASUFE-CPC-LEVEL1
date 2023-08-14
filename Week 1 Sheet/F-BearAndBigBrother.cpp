//https://codeforces.com/problemset/problem/791/A
#include <iostream>
using namespace std;
int main(){
int a,b,years=0;
cin>>a>>b;
for (int i=0;a<=b;i++){
    a*=3;
    b*=2;
    years++;
}
cout<<years;
return 0;
}

