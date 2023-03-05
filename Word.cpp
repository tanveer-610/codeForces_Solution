#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lCounter=0,uCounter=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            lCounter++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            uCounter++;
        }
    }
    //cout<<lCounter<<" "<<uCounter<<endl;
    if(lCounter >= uCounter){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    return 0;
}
