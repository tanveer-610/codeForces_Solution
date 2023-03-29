#include<bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    int tc;
    cin>>tc;
    int a[tc],b[tc];

    for(int i=0;i<tc;i++)
    {
        cin>>a[i]>>b[i];
    }
    int count=0;
     for(int i=0;i<tc;i++)
    {
        for(int j=0;j<tc;j++){
            if(a[i]==b[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return  0;
}
