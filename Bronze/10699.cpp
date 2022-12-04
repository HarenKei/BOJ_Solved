#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    int year = t->tm_year + 1900;
    int month = t->tm_mon + 1;
    int day = t->tm_mday;
    if(day < 10){
        cout << year << "-" << month << "-0" << day << "\n";
    } else{
        cout << year << "-" << month << "-" << day << "\n";
    }
    
    return 0;
}