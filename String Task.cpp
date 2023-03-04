#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='o' || s[i]=='O' || s[i]=='y' || s[i]=='Y' || s[i]=='e' || s[i]=='E' || s[i]=='u' || s[i]=='U' || s[i]=='i' || s[i]=='I' ){
            continue;
        }else if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
            cout<<"."<<s[i];
        }else{
            cout<<"."<<s[i];
        }
    }
    cout<<"\n";
    return 0;
}
