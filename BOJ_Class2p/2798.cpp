#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, result = 0, maxSum = 0;
    vector<int> card;

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        card.push_back(num);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                result = card[i] + card[j] + card[k];
                if(result <= m && maxSum < result){
                    maxSum = result;
                } 
                
            }
        }  
    }
    cout << maxSum << '\n';

    return 0;

}