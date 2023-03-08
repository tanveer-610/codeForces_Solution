#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,h;
    cin>>n>>h;
    int weighOfRoad=0;
    while(n--){
        int a;
        cin>>a;
        if(a>h){
            weighOfRoad+=2;
        }else{
            weighOfRoad+=1;

        }
    }
    cout<<weighOfRoad<<endl;
    return 0;
}
