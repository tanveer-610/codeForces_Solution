#include<bits/stdc++.h>

using namespace std;
int main()
{
    int p;
    cin>>p;
    float sum=0;
    int arr[p];
    for(int i=0; i<p; i++)
    {
        cin>>arr[i];
        
        sum=sum+arr[i]; 
        
    }
    
    cout<<sum/p;
}
