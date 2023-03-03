#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string cat,int string_size){
    string newString="";

    for(int i=0;i<string_size-1;i++){
        if(cat[i] != cat[i+1]){
            newString+=cat[i];
        }
    }
    newString.push_back(cat[string_size-1]);
    return newString;
}

int main()
{
    int tc,string_size;

    cin>>tc;
    while(tc>0)
    {
        cin >> string_size;
        string cat;
        cin>>cat;
        transform(cat.begin(),cat.end(),cat.begin(),::toupper);
        string s= removeDuplicate(cat,string_size);

        if(s=="MEOW"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        tc--;
    }
    return 0;
}
