#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    float input;

    while(cin >> input) {
        if(input < 0) {
            break;
        } else {
            cout << fixed;
            cout.precision(2);
            cout << "Objects weighing " << input << " on Earth will weigh " << input * 0.167 <<" on the moon.\n";
        }
    }

    return 0;
}
