#include <bits/stdc++.h>
#define MAX 100

using namespace std;


int n;
int arr[MAX];
int cnt = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = n - 1; i > 0; i--){
        while(arr[i-1] >= arr[i]){
            arr[i-1] -= 1;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}