//https://atcoder.jp/contests/abc258/tasks/abc258_a?lang=en
#include <iostream>
using namespace std;
int main(){
int k;
cin>>k;
if (k<10){
    cout<<21<<":"<<0<<k;
}
else if(k>=10&&k<60){
    cout<<21<<":"<<k;
}
else{
    if(k%60<10){
        cout<<22<<":"<<0<<k%60;
    }
    else{
        cout<<22<<":"<<k%60;
    }
}
}


