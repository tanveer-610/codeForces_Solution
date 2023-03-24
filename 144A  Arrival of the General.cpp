#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    int max=0;
    int min=101;
    int max_in,min_in;
    for(int i=0;i<n;i++){
        cin>>a[i];

            if(max<a[i]){
                max=a[i];
                max_in=i;
            }
            if(min>=a[i]){
                min=a[i];
                min_in=i;
            }

    }
    if(max_in>min_in){
        min_in++;
    }
    cout<< max_in + (n-1)-min_in<<endl;
    return 0;
}
