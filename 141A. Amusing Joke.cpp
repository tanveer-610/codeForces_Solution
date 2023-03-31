#include<bits/stdc++.h>
using namespace std;
int main(){

    string a,s,d;
    cin>>a>>s>>d;
    a=a+s;
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    if(a==d)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
