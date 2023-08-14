//https://www.spoj.com/problems/STACKEZ/en/
#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<long long>st;
int t;
cin>>t;
int x,f;
while(t--){
    cin>>x;
    if(x==1){
        cin>>f;
        st.push(f);
    }
    else if(x==2){
        if(!st.empty()){
            st.pop();
        }
    }
    else{
        if(!st.empty()){
            cout<<st.top()<<"\n";
        }
        else{
            cout<<"Empty!\n";
        }
    }
}

}
