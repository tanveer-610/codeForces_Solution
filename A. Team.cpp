#include<bits/stdc++.h>
using namespace std;
int main(){
   int tc,a,b,c;
   int counter=0;
   cin>>tc;
   while(tc>0){
    cin>>a>>b>>c;

    if(a+b+c >= 2){
        counter+=1;
    }
    tc--;
   }
    cout<<counter<<endl;
    return 0;

}
