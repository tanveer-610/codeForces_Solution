#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,unTreated=0,recruit=0;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        int a;
        cin>>a;
        if(recruit+a < 0){
            unTreated++;
        }else{
           recruit+=a;
        }
    }
    cout<<unTreated<<endl;
}
