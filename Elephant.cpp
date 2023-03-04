#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,counter=0,i=0;
    cin>>a;
    int ar[5]={5,4,3,2,1};
    while(a>0)
    {
        int c= a/ar[i];
        counter = counter + c;

        a= a - (ar[i]*c);

        i++;
    }
    cout<<counter<<endl;
    return 0;
}
