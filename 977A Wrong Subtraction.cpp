#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(b--){
        int lastNum = a%10;
        if(lastNum==0){
            a=a/10;
        }else{
            a=a-1;
        }
    }
    cout<<a<<endl;
    return 0;

}
