#include <algorithm>
#include <bits/stdc++.h>
#include <map>
#include <utility>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, string>> vec;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int age;
        string name;

        cin >> age >> name;
        vec.push_back(make_pair(age, name));
    }

    stable_sort(vec.begin(), vec.end(), compare);
    
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i].first << " " << vec[i].second << '\n';
    }


    return 0;
}