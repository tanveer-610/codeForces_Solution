#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int flag=1;
    pair <int,int> ar[1000+10];
    for(int i=0;i<n;i++){
        cin>>ar[i].first>>ar[i].second;
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++){
        if(s<=ar[i].first){
            flag=0;
            break;
        }else{
            s+=ar[i].second;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
