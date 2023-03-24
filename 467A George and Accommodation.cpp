#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, book, acc, counter = 0;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> book >> acc;
        if(acc-book >= 2)
        {
           counter++;
        }
     }
     cout << counter;
}
