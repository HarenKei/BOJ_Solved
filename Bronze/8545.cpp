#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    reverse(str.begin(), str.end());

    cout << str << endl;


    return 0;
}