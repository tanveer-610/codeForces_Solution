#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,sizeof_s;
    string s;
    cin>>tc;
    while(tc>0){
        cin>>s;
        sizeof_s=s.size();
        if(sizeof_s<=10){
            cout<<s<<endl;
        }else{
          cout<<s[0]<<sizeof_s-2<<s[sizeof_s-1]<<endl;

        }
        tc--;
    }
    return 0;
}
