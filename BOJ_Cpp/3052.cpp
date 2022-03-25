#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> modArray;
    
    for(int i = 0; i < 10; i++){
        int numInput = 0;
        cin >> numInput;
        numInput %= 42;
        modArray.push_back(numInput);
    }
    sort(modArray.begin(),modArray.end());
    modArray.erase(unique(modArray.begin(),modArray.end()),modArray.end());

    cout << modArray.size() << endl;
}