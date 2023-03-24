#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin>>tc;
    int a[tc];
    for(int i=0;i<tc;i++){
        cin>>a[i];
    }
    sort(a,a+tc);
    for(int i=0;i<tc;i++){
        if(a[i]!=tc-1){
            cout<<a[i]<<" ";
        }else{
            cout<<a[i]<<endl;
        }
    }
    return 0;
    
}
