#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    while(1){
        int input = 0;
        int cnt = 0;

        cin >> input;
        
        if(input == 0) return 0;
        else{
            for(int i = input; i > 0; i--){
                cnt += i;
            }
            cout << cnt << '\n';
            input = 0;
        }
    }
    return 0;
}