#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;

    for(int i = 0; i < 5; i++){
        int input;
        cin >> input;

        if(input >= 40 && input <= 100){
            sum += input;
        } else if(input < 40 && input >= 0) {
            sum += 40;
        }

    }

    cout << sum / 5 << '\n';

    return 0;
}