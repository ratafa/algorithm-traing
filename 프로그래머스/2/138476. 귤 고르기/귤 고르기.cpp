#include <bits/stdc++.h>
using namespace std;

static bool comp(pair<int, int>& a, pair<int, int>& b){
	return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int, greater<int>> mp;
    
    for(int i=0; i<tangerine.size(); i++) {
        mp[tangerine[i]]++;
    }
    
    vector<pair<int,  int>> v(mp.begin(), mp.end());
    
    sort(v.begin(), v.end(), comp);
    
    for(auto s : v){
        if(k <= 0) {
            break;
        } else {
            answer++;
            k -= s.second;
        }
        
        // cout << s.first << "," << s.second << "/";
    }
    
    
    
    return answer;
}