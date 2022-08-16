#include <bits/stdc++.h>

using namespace std;

int t; //test case

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--){
        int day = 0;
        

        cin >> day;
        vector<int> price;

        for(int i = 0; i < day; i++){
            int num;
            cin >> num;
            price.push_back(num);
        }

        int maxVal = 0;
        long long result = 0;

        for(int i = day - 1; i >= 0; i--){
            if(maxVal > price[i]){
                result += maxVal - price[i];
            } else{
                maxVal = price[i];
            }
        }

        cout << result << '\n';
    }
    
    return 0;
}
