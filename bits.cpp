#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,value=0;
    string x;
    cin>>tc;
    while(tc>0){
        cin>>x;
        if(x[1]=='+'){
            value+=1;
        }
        else{
            value-=1;
        }
        tc--;
    }
    cout<<value<<endl;
    return 0;
}
