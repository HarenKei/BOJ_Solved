#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
int result = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int time;
        cin >> time;
        v.push_back(time);
    }

    sort(v.begin(), v.end());

    result = *v.begin();

    for(int i = 1; i < v.size(); i++){
        for(int j = 0; j <= i; j++){
            result += v[j];
        }
    }

    cout << result;

    return 0;
}