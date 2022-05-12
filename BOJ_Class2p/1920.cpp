#include <bits/stdc++.h>

using namespace std;

int chk(int num){
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n;
    vector<int> vec;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());
    int hi = vec[n-1];
    int lo = vec[0];
    int mid = vec[(hi + lo) / 2];
   


    cin >> m;
    for(int j = 0; j < m;  j++){
        int target;
        cin >> target;
        bool found = binary_search(vec.begin(), vec.end(), target);
        
        if(found){
            cout << 1 << '\n';
        } else{
            cout << 0 << '\n';
        }
    }
    return 0;


}