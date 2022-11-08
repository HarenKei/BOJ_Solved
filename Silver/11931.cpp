#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> num;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(), num.end(), greater<int>());

    for(int i = 0; i < num.size(); i++){
        cout << num[i] << '\n';
    }

    return 0;
}