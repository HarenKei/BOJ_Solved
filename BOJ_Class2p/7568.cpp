#include <bits/stdc++.h>

using namespace std;

int n;
vector< pair<pair<int, int>, int> > v;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(make_pair(x,y), 1));
    }
    //pair first.first = 몸무게, first.second = 키, second = 순위

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second){
                v[i].second++;
            }            
        }
        cout << v[i].second << " ";
    }
    cout << '\n';

    return 0;
}