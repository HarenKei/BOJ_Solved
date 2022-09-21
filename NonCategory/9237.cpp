#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int> pq;
int ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        pq.push(input);
    }

    int ans = 0;
    int day = 1;
    while(!pq.empty()){
        ans = max(pq.top()+ day, ans);
        day++;
        pq.pop();
    }

    cout << ans + 1 << "\n";
}
/*
int n;
vector<int> v;
int ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++){
        ans = max(v[i] + i + 1, ans);
    }

    cout << ans + 1 << '\n';

    return 0;

    
}
*/