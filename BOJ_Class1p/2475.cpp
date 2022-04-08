#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;
    int chknum = 0;
    
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        vec.push_back(num * num);
        chknum += vec[i];
    }

    cout << chknum % 10 << endl;

    return 0;   
}