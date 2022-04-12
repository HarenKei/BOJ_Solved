#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;
    int imp; //중요도
    int n, m;


    for(int i = 0; i < testCase; i++){
        priority_queue<int> pq;
        queue<pair<int, int> > printq;
        
        int count = 0;
        cin >> n >> m;

        for(int j = 0 ; j < n; j++){
        
            cin >> imp;
            printq.push(make_pair(j, imp));
            pq.push(imp);
        }

        while(!printq.empty()){
            int imt = printq.front().second;
            int idx = printq.front().first;
            printq.pop();

            if(imt == pq.top()){
                pq.pop();
                ++count;
                    if(m == idx){
                    cout << count << '\n';
                    break;;
                } 
            } else{
                printq.push(make_pair(idx, imt));
            }
        }
    }
    return 0;
}