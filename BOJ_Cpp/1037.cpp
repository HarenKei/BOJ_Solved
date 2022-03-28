#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> measure;
    int countMeas;
    cin >> countMeas;

    for(int i = 0 ; i < countMeas; i ++){
        int num = 0;
        cin >> num;
        measure.push_back(num);
    }

    cout << measure[0] * measure[countMeas-1] << endl;
}