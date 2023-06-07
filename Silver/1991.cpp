#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<char, char>> v(27); //first : left second : right

void preorder(char data) {
    if(data == '.') return;

    cout << data;
    preorder(v[data-'A'].first);
    preorder(v[data - 'A'].second);
}

void inorder(char data) {
    if(data == '.') return;

    inorder(v[data-'A'].first);
    cout << data;
    inorder(v[data-'A'].second);
}

void postorder(char data) {
    if(data == '.') return;

    postorder(v[data - 'A'].first);
    postorder(v[data-'A'].second);
    cout << data;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++) {
        char root, left, right;
        cin >> root >> left >> right;

        v[root - 'A'].first = left;
        v[root - 'A'].second = right;
    }

    preorder('A');
    cout << "\n";
    inorder('A');
    cout << "\n";
    postorder('A');
    cout << "\n";

    return 0;
}
