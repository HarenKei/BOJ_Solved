#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d;
    deque<pair<long long, long long>> dp; 
    long long result = -1e9; //최소값 -10억

    cin >> n >> d;

    for(int i = 1; i <= n; i++) {
        pair<int, long long> target;
        target.first = i;
        cin >> target.second;

        while(dp.size() && dp.front().first < i - d) {
            // 탐색 범위 d에 맞지 않는 dp 덱의 front 제거
            dp.pop_front();
        }

        if(dp.size()) {
            // dp 덱이 비어있지 않다면 현재 입력된 값 그 자체와 현재 dp 덱 맨 앞의 값 + 현재 입력된 값 중 최대값 구해 넣음
            target.second = max(target.second, dp.front().second + target.second);
        }

        // 결과와 현재 구한 최대값을 비교하여 더 큰 값을 결과에 넣음
        result = max(result, target.second);

        while(dp.size() && dp.back().second <= target.second) {
            // dp 덱의 back에 있는 최대값이 현재 넣으려는 값의 최대값보다 작다면 back 제거
            dp.pop_back();
        }

        dp.push_back(target);
    }

    cout << result << "\n";

    return 0;
}