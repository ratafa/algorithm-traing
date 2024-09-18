#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int maxNum = *max_element(arr.begin(), arr.end());
    int count = 0;
    int a = 1;
    int tester = 0;
    
    // cout << maxNum;
    
    while(count != arr.size()) {
        count = 0;
        tester = maxNum * a;
        for(auto s:arr) {
            if(tester % s == 0) {
                count++;
            }
        }
        a++;
    }
    
    
    return tester;
}