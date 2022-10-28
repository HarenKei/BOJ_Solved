#include <bits/stdc++.h>

using namespace std;

int n;
vector< pair<int, int> > xy;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;
        xy.push_back(make_pair(y, x));
    }

    sort(xy.begin(), xy.end());

    for(int i = 0; i < xy.size(); i++){
        cout << xy[i].second << " " << xy[i].first << '\n';
    
    }


    

    return 0;
}