#include <iostream>

using namespace std;

int main() {
    int tc;
    cin>>tc;
    int sumOfPassengers=0;
    int ar[tc];
    for(int i=0;i<tc;i++){
        int a,b;
        cin>>a>>b;
        sumOfPassengers=sumOfPassengers-a+b;
        ar[i]=sumOfPassengers;
    }
    int max=ar[0];
    for(int i=1;i<tc;i++){
      if(ar[i]>max){
          max=ar[i];
      }
    }
    cout<<max<<endl;


    return 0;
}
