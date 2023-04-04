#include<bits/stdc++.h>
using namespace std;
void func(int n,int d,string str)
{
    string newS;
    int index=-1;
    for(int i=0; i<n; i++)
    {
        if((str[i]-'0')<d)
        {
            newS+='0'+d;
            index=i;
            break;
        }
        newS+=str[i];
    }
    if(index==-1) newS+='0'+d;
    else
    {
        for(int i=index; i<n; i++)
            newS+=str[i];
    }
    cout<<newS<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,d;
        string str;
        cin>>n>>d>>str;
        func(n,d,str);
    }

}
