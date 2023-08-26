#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char input;
    cin >> input;

    if(input == 'M') {
        cout << "MatKor\n";
    } else if(input == 'W') {
        cout << "WiCys\n";
    } else if(input == 'C') {
        cout << "CyKor\n";
    } else if(input == 'A') {
        cout << "AlKor\n";
    } else if(input == '$') {
        cout << "$clear\n";
    }


    return 0;
}
