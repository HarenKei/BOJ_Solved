#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    int a = str.length() >= 3 && str[1] == '0' ? stoi(str.substr(0, 2)) : stoi(str.substr(0, 1));
    int b = a == 10 ? stoi(str.substr(2)) : stoi(str.substr(1));

    cout << a + b << "\n";

    return 0;
}
