#include <bits/stdc++.h>
using namespace std;

vector<int> answer;

vector<int> a(int i, int n) {
    int m = i+1;
    int result = m/n;
    int left = m%n;
    
    if(m%n != 0) {
        result++;
    }
    if(left == 0) {
        left = n;
    }
    
    answer.push_back(left);
    answer.push_back(result);
    
    return answer;
}

vector<int> solution(int n, vector<string> words) {
    vector<string> set;
    bool isMiss = false;
    
    set.push_back(words[0]);
    
    for(int i=1; i<words.size(); i++) {
        // 끝말잇기 규칙 검증
        if( words[i-1].back() != words[i].front()) {
            a(i, n);
            isMiss = true;
            break;
        }
        
        if (find(set.begin(), set.end(), words[i]) != set.end()) {
            cout << "찾았다" << i;
            a(i,n);
            isMiss = true;
            break;
        } else {
            set.push_back(words[i]); // 처음 보는 문자열 추가
        }
    }
    
    for(auto s : set){
        cout << s << ",";
    }
    
    if(isMiss == false) {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}