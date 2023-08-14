//https://atcoder.jp/contests/abc249/tasks/abc249_a?lang=en
#include <iostream>
using namespace std;
int main(){
long long int a,b,c,d,e,f,x,t1=0,t2=0;
cin>>a>>b>>c>>d>>e>>f>>x;
t1=a*b*(x/(a+c))+b*min(a,x%(a+c));
t2=d*e*(x/(d+f))+e*min(d,x%(d+f));
if(t1>t2){
    cout<<"Takahashi";
}
else if(t2>t1){
    cout<<"Aoki";
}
else{
     cout<<"Draw";
    }

}


