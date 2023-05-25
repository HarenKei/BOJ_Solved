#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, ans = 0;
    vector<int> crane;
    vector<int> box;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        crane.push_back(input);
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        box.push_back(input);
    }

    sort(crane.begin(), crane.end(), greater<int>());
    sort(box.begin(), box.end(), greater<int>());

    if(crane[0] < box[0]){
        cout << -1 << "\n";
        return 0;
    }

    while(!box.empty()) {
        ans++;
        for (int i = 0; i < crane.size(); i++) {
            for (int j = 0; j < box.size(); j++) {
                if (crane[i] >= box[j]) {
                    box.erase(box.begin() + j);
                    break;
                }
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
