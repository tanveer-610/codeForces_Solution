#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,counter=0;
    cin>>tc;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == s[i+1]){
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
