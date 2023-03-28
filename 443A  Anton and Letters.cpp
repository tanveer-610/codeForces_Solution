#include<bits/stdc++.h>

using namespace std;

int main(){

    char ch;
	set<char> alpha;

	while (cin >> ch) {
		if (ch != '{' && ch != ',' && ch != '}')
			alpha.insert(ch);
	}

	cout << alpha.size() << endl;

    return 0;
}
