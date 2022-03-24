#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> point;
    vector<int> winner;

    for(int i = 0; i < 5; i++) {
        int sum_point = 0;
        for(int j = 0; j < 4; j++){
            int sPoint;
            cin >> sPoint;
            point.push_back(sPoint);
            sum_point += sPoint;
        }
        //cout<<sum_point;
         winner.push_back(sum_point);
    }


    int max_point = *max_element(winner.begin(), winner.end());
    int max_index = max_element(winner.begin(), winner.end()) - winner.begin() + 1 ;

    cout << max_index << " " << max_point << endl;
}