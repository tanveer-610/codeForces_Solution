#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,l,w;
    cin>>n>>m>>a;

    l=n/a;
    if(n%a != 0){
        l++;
    }
    w=m/a;
    if(m%a != 0){
        w++;
    }

    cout<<l*w<<endl;
    return 0;

}
