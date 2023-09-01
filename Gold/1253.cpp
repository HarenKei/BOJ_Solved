#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ans = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        int num = v[i];
        int start = 0, end = n - 1;

        while(start < end) {
            int sum = v[start] + v[end];

            if(sum == num) {
                if(start == i) start++;
                else if(end == i) end--;
                else{
                    ans++;
                    break;
                }
            } else if(sum < num) {
                start++;
            } else {
                end--;
            }

        }
    }

    cout << ans << "\n";


    return 0;
}
