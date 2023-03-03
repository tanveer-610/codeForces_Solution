#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5],keyValueX,keyValueY;
    for(int i=0;i< 5;i++){
        for(int j= 0;j< 5;j++){

            cin>>a[i][j];
            if(a[i][j]== 1){
                keyValueX=i;
                keyValueY=j;
            }
        }
    }

    keyValueX=2-keyValueX;
    keyValueY=2-keyValueY;
    cout<<abs(keyValueX)+abs(keyValueY)<<endl;
    return 0;
}
