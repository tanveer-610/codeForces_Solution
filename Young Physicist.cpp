#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,x,y,z,sumX=0,sumY=0,sumZ=0;
    cin>>tc;
    while(tc--){
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(sumX==0 && sumY==0 && sumZ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
