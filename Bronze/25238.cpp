#include <bits/stdc++.h>

using namespace std;

string str;

int a, b;
float result;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    result = a * (100 - b) / 100;

    if(result >= 100) cout << 0 << '\n';
    else cout << 1 << '\n';



    return 0;
}