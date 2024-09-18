#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
//     for(auto v : commands){
//         int a,b,c;
//         a = v[0];
//         b = v[1];
//         c = v[2];
        
//         vector<int> v2;
//         v2.subtrl(v2.begin() + v[0] - 1, v2.begin() + v[1]);
//         cout << v2;
        
        
//     }
    
    
    
    
    
    
    

    


    for(auto v : commands) {
        int a,b,c;        
        a = v[0];
        b = v[1];
        c = v[2];
        
        vector<int> v2(array.begin() + a - 1, array.begin() + b);
        
        sort(v2.begin(), v2.end());
        
        answer.push_back(v2[c - 1]);
    }
    return answer;
}