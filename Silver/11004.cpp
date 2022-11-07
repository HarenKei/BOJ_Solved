#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> num;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(), num.end());

    cout << num[k-1] << '\n';

    return 0;
}