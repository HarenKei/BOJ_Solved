#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int m, cnt = 0;
        vector<int> left;
        vector<int> right;
        
        cin >> m;

        for(int i = 0; i < m; i++){
            int input;
            cin >> input;
            left.push_back(input);
        }

        for(int i = 0; i < m; i++){
            int input;
            cin >> input;
            right.push_back(input);
        }

        for(int i = 1; i < m; i++){
            for(int j = 0; j < m - 1; j++){
                if(left[i] - left[j] == 500){
                    for(int k = 0; k < m; k++){
                        if(left[i] + 500 == right[k]){
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }

        cout << cnt << "\n";

    }
    
    return 0;
}