#include <bits/stdc++.h>

using namespace std;

int main() {
    string s,ss,newS="";
    cin>>s>>ss;
    for(int i=0;i<s.size();i++){
        if(s[i]==ss[i]){
            newS.push_back('0');
        }else{
            newS.push_back('1');
        }
    }
    cout<<newS<< endl;
    return 0;
}
