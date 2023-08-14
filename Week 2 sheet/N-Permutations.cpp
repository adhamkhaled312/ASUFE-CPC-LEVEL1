//https://cses.fi/problemset/task/1070
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==2||x==3){
        cout<<"NO SOLUTION";
    }
    else if(x==1){
        cout<<1;
    }
    else{
        for(int i=2;i<=x;i+=2){
            cout<<i<<" ";
    }
        for(int i=1;i<=x;i+=2){
            cout<<i<<" ";
    }
    }

}
