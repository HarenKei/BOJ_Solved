#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input;
    cin >> input;

    if(input.find('7') == string::npos) {
        if(stoi(input) % 7 == 0) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    } else {
        if(stoi(input) % 7 == 0) {
            cout << 3 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }

    return 0;
}
