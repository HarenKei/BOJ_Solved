#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int> > vec;
int a = -1000000001, b = -1000000001;
int ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }

    sort(vec.begin(), vec.end());
    a = vec[0].first;
    b = vec[0].second;

    for(int i = 1; i < n; i++){
        if(vec[i].first > b){
            ans += (b - a);
            a = vec[i].first;
            b = vec[i].second;
        }
        if(vec[i].second > b){
            b = vec[i].second;
        }
    }

    ans += (b - a);

    cout << ans << '\n';

    return 0;
}