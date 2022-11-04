#include <bits/stdc++.h>

using namespace std;

int n;
set<int> setNum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    while(n--){
        int input;
        cin >> input;
        setNum.insert(input);
    }

    for(auto it = setNum.begin(); it != setNum.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}