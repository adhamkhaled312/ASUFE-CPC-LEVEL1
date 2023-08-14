//https://codeforces.com/gym/104289/problem/C
#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
cin>>s;

for(int i=0;i<s.size();i++){
       if (s[i+1]==s[i]){
        continue;
    }
    if(s[i+1]<s[i]){
        for(int j=0;j<s.size();j++){
            cout<<s[0];
    }
    }
    else{
        for(int x=0;x<s.size();x++){
          cout<<s[0]-47;
    }
    }

    break;
}
}
