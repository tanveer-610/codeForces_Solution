#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, counter = 0;
    cin >> a;
    int arrr[a];
    for(int i = 0; i < a; i++)
    {
        cin >> arrr[i];
        if(arrr[i] == 1)
        {
            counter++;
        }
    }
    if(counter == 0)
    {
         cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}
