#include <bits/stdc++.h>
#define MAX 30000

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int arr[MAX];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int maxVal = arr[i];
        int cnt = 0;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] > maxVal)
                break;
            else 
                cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << "\n";
    

    return 0;
}