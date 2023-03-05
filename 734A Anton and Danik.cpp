#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int antonCount=0,danikCount=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            antonCount++;
        }else if(s[i]=='D'){
            danikCount++;
        }
    }
    if(antonCount > danikCount){
        cout<<"Anton"<<endl;
    }else if(antonCount < danikCount){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
