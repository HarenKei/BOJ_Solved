#include <bits/stdc++.h>
#include <ios>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<fixed;
    cout.precision(3);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        vector<int> vec;
        int n;
        int cnt = 0;
        float avg = 0;
        cin >> n;

        for(int j = 0; j < n; j++){
            int score = 0;
            cin >> score;
            vec.push_back(score);
            avg += vec[j];
        }

        avg /= n;

        for(int k = 0; k < vec.size(); k++){
            if(vec[k] > avg){
                cnt++;
            }
        }

        float result = (float)cnt / n * 100.0;
        cout << result << "%" << '\n';

    }

    return 0;
}