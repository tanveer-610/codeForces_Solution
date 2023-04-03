#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> rdatabase;
    string s;
    while (n--)
    {
        cin >> s;
        if (rdatabase.count(s) == 0)
        {
            cout << "OK" << endl;
            rdatabase[s] = 1;
        }
        else
        {
            cout << s << rdatabase[s] << endl;
            rdatabase[s] += 1;
        }
    }
    return 0;
}
