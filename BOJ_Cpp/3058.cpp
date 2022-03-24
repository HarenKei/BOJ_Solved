#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int caseT;
    

    cin >> caseT;

    for(int i = 0; i < caseT; i++){
        int numInput;
        int sum;
        int min;
        vector<int> evenArr;
        for(int j = 0; j < 7; j++){
            cin >> numInput;
            if(numInput % 2 == 0)
                evenArr.push_back(numInput);
        }
        sum = accumulate(evenArr.begin(), evenArr.end(), 0);
        min = *min_element(evenArr.begin(),evenArr.end());
        cout << sum << " " << min << endl;
    }
}