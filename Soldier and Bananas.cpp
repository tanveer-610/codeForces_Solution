#include<bits/stdc++.h>
using namespace std;
int main(){

    int k,w;
    long long int n,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        sum = sum + (i*k);
    }
    if(sum-n < 0){
        cout<<0<<endl;
    }else{
        cout<<sum-n<<endl;
    }

    return 0;
}
