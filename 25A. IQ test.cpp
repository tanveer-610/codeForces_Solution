#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int eCount=0,oCount=0;
    int eIn,oIn;
    for(int  i=1;i<=tc;i++){
        int  a;
        cin>>a;
        if(a%2== 0){
            eCount++;
            eIn=i;
        }else{
            oCount++;
            oIn=i;
        }
    }
    if(eCount==1){
        cout<<eIn<<endl;
    }else{
      cout<<oIn<<endl;
    }
    return 0;
}
