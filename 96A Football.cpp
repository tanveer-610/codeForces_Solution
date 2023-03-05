#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count0=0,count1=0,p=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            count0++;
            count1=0;

        }
        else
        {
            count1++;
            count0=0;
        }
        if(count1 == 7 || count0==7)
        {
            p=1;
            break;
        }

    }
    if(p == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
