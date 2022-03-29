#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> hatNum;
    int sum = 0;

    for(int i = 0; i < 9; i++){
        int inputHat;
        cin >> inputHat;
        hatNum.push_back(inputHat);
        sum += inputHat;
    }
    sum -= 100;
    sort(hatNum.begin(), hatNum.end());

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(hatNum[i] + hatNum[j] == sum){
                for(int k = 0; k<9; k++){
                    if(k != i && k != j)
                        cout << hatNum[k] << endl;
                }
                return 0;
            }
        }

    }
    return 0;
}