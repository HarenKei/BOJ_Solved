#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int> > pq;
vector< pair<int, int> > v;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int s, t;
        cin >> s >> t;
        v.push_back(make_pair(s,t));
    }

    sort(v.begin(), v.end());

    pq.push(v[0].second);

    for(int i = 1; i < n; i++){
        pq.push(v[i].second);

        if(v[i].first >= pq.top()){
            pq.pop();
        }
    }

    cout << pq.size() << '\n';


    return 0;
}