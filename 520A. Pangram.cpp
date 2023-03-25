#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    //cout<<s<<endl;
    char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int count=0;
    for(int i=0;i<26;i++){
        for(int j=0;j<t;j++){
            if(b[i]==s[j]){
                count++;
                break;
            }
        }
    }
    if(count==26){
        cout<<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;
    }

}
