#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, result = 0;

    while(cin >> num) {
        if(num == -1) {
            break;
        }

        result += num;
    }

    cout << result << "\n";

    return 0;
}