#include <bits/stdc++.h>
#define MAX 46

using namespace std;

int k;
pair<int, int> dp[MAX];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k;

    dp[0].first = 1;
    dp[0].second = 0;

    // a => b => ba => bab => babba

    // dp[0] : a => a 1 b 0
    // dp[1] : b => a 0 b 1
    // dp[2] : ba => a 1 b 1
    // dp[3] : bab => a 1 b 2
    // dp[4] : babba => a 2 b 3
    // dp[5] : babbabab => a 3 b5
    // dp[6] : babbababbabba => a 5 b8

    // i번째 눌렀을 때 b의 개수 = dp[i] = dp[i-1]의 a 개수 + b 개수
    // a의 개수는 dp[i] = dp[i-1]의 b의 개수
    // dp[10] => a 34 b 55

    for (int i = 1; i <= k; i++)
    {
        dp[i].first = dp[i - 1].second;
        dp[i].second = dp[i - 1].first + dp[i - 1].second;
    }

    cout << dp[k].first << " " << dp[k].second << '\n';

    return 0;
}