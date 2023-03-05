#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,i;
    cin>>a;
    string s=to_string(a);
    int flag=0;
    for(i=0;i<s.size();i++){
        if(s[i] == '4' || s[i] == '7'){
            flag++;

        }
    }
    if(flag==4 || flag==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
