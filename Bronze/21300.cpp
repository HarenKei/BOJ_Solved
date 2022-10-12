#include <bits/stdc++.h>

using namespace std;

int result;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 6; i++){
        int input;
        cin >> input;
        result += (5 * input);
    }

    cout << result << '\n';

    return 0;
}