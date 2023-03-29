#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int a[5]={1,5,10,20,100};
    int i=4;
    int  sum=0;
    while(tc>0){
        int reminder=tc/a[i];
        sum+=reminder;
        tc=tc - (reminder*a[i]);
        i--;
    }
    cout<<sum<<endl;
    return 0;
}

