//https://codeforces.com/problemset/problem/427/A
#include <iostream>
using namespace std;
int main(){
int n,x,officers=0,crimes=0,untreated=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(x>-1){
        officers+=x;;
    }
    else{
        crimes++;
        if(crimes>officers){
           untreated++;
           crimes--;
    }
        else{
            crimes--;
            officers--;
        }
    }
}
cout<<untreated;


}
