#include <bits/stdc++.h>

#define INF 2147483647

using namespace std;

int n, m;
int ansChickenDist = INF;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;
vector<bool> selChicken;

void distance() {
}

void DFS(int idx, int depth) {
    if (depth == m) {
        int minChickenDist = 0;
        for (int i = 0; i < house.size(); i++) {
            int eachMinDist = INF;
            for (int j = 0; j < chicken.size(); j++) {
                if (selChicken[j]) {
                    int dist = abs(house[i].first - chicken[j].first) + abs(house[i].second - chicken[j].second);
                    eachMinDist = min(eachMinDist, dist);
                }
            }
            minChickenDist += eachMinDist;
        }
        ansChickenDist = min(ansChickenDist, minChickenDist);
    } else {
        for (int i = idx; i < chicken.size(); i++) {
            if (!selChicken[i]) {
                selChicken[i] = true;
                DFS(i, depth + 1);
                selChicken[i] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int ct;
            cin >> ct;

            if (ct == 1) house.push_back({i, j});
            else if (ct == 2) {
                chicken.push_back({i, j});
                selChicken.push_back(false);
            }
        }
    }

    DFS(0, 0);

    cout << ansChickenDist << "\n";

    return 0;
}
