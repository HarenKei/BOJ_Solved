#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<int> solution;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        solution.push_back(num);
    }

    int s = 0, e = n - 1;
    int left = solution[s];
    int right = solution[e];
    int result = abs(left + right);

    while(s < e) {
        int sum = solution[s] + solution[e];

        if(abs(sum) < result) {
            result = abs(sum);
            left = solution[s];
            right = solution[e];
        }

        if(sum > 0) {
            e--;
        } else {
            s++;
        }

    }

    cout << left << " " << right << "\n";
    
    return 0;
}
