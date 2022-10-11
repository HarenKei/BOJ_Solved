#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
int arr[MAX];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";




    return 0;

}