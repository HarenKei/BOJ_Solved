#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[3];
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < 3; i++) {
        cin >> arr[i];

        if(arr[i] == 1){
            cnt1++;
        } else {
            cnt2++;
        }
    }

    if(cnt1 > cnt2) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }

    return 0;
}