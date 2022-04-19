#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        vector<int> vec;
        for(int i = 0; i < 3; i++){
            int num = 0;
            cin >> num;
            vec.push_back(num);
        }
        sort(vec.begin(), vec.end());

        int max = *max_element(vec.begin(), vec.end());

        if(vec[0] == 0 && vec[1] == 0 && vec[2] == 0){
            return 0;
        }
        else if((vec[0] * vec[0]) + (vec[1] * vec[1]) == (max * max)){
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
    return 0;
}