#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int num){
    string s = to_string(num);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    if (rev(num1) > rev(num2)) {
        cout << rev(num1) << endl;
    } else {
        cout << rev(num2) << endl;
    }
}