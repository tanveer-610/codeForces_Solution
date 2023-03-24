#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        long long int p,q;
        cin>>p>>q;

        int reminder=p%q;
        if(reminder==0){
            cout<<0<<endl;
            continue;
        }
        cout<<q-reminder<<endl;
    }
}
