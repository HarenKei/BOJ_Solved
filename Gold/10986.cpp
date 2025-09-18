#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    long long result = 0;
    vector<long long> numbers;
    vector<long long> counts;

    cin >> n >> m;
    numbers.resize(n + 1);
    counts.resize(m);

    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        numbers[i] = numbers[i - 1] + input;

        int temp = numbers[i] % m;
        counts[temp]++;
    }

    result += counts[0];

    for(int i = 0; i < m; i++) {
        result += counts[i] * (counts[i] - 1) / 2;
    }

    cout << result << "\n";


    return 0;
}