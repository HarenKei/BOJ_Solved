#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector< pair< pair<int, int>, pair<int, string> > > student(n);

    for(int i = 0; i < n; i++){
        cin >> student[i].second.second >> student[i].second.first >> student[i].first.second >> student[i].first.first;
    }

    sort(student.begin(), student.end());

    cout << student[n-1].second.second << '\n' << student[0].second.second << '\n' ;




    return 0;
}