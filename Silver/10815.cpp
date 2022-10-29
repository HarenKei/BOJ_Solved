#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> vec, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    while(n--){
        int input;
        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    cin >> m;

    while(m--){
        int input;
        cin >> input;

        ans.push_back(binary_search(vec.begin(), vec.end(), input));
    } 

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    
    return 0;
}