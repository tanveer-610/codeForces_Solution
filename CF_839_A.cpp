#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,token;
    string s;
    int sum=0;
    cin>>tc;
    cin.ignore();
    while(tc>0){
            getline(cin,s);
            stringstream ss(s);
        while(ss>>token){
            int num=(int)token;
            sum+=num;

        }
        cout<<sum<<endl;
        sum=0;
        tc--;
    }
}
