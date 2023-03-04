#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char temp;
    cin>>s;
    int sizeOfString =s.size();
    for(int i=0;i<sizeOfString;i+=2){
        for(int j=0;j<sizeOfString-1;j+=2){
            if(s[j] > s[j+2]){
            temp = s[j];
            s[j]= s[j+2];
            s[j+2]= temp;
          }
        }
    }
    cout<<s<<endl;
    return 0;
}
