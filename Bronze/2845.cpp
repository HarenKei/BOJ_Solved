#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int people, space;
    vector<int> result;
    cin >> people >> space;
    
    for(int i = 0; i < 5; i++){
        int news;
        cin >> news;
        result.push_back(news - (people * space));
    }

    for(auto it = result.begin(); it != result.end(); it++){
        cout << *it << " ";
    }

    return 0;
}