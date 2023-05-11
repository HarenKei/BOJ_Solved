#include <bits/stdc++.h>
#define MAX 16

using namespace std;

int l, c;
bool vowel; //모음 자음
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
bool visited[MAX];
vector<char> v;
char arr[MAX];

bool vcChk() {
    int cnt = 0;

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < 5; j++) {
            if(arr[i] == vowels[j]){
                cnt++;
            }
        }
    }

    if(cnt >= 1 && l - cnt >= 2)
        return true;
    else 
        return false;
}

void DFS(int depth, int idx) {
    if(depth == l) {
        if(vcChk()) {
            for(int i = 0; i < l; i++) {
                cout << arr[i];
            }
            cout << "\n";
        }
        return;
    } else {
        for(int i = idx; i < c; i++) {
            if(!visited[i]) {
                visited[i] = true;
                arr[depth] = v[i];
                visited[i] = false;
                DFS(depth + 1, i + 1);
            }
        }
    }
    return;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> l >> c;
    
    for(int i = 0; i < c; i++) {
        char input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    DFS(0, 0);

    return 0;
}