#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int num = 0;
    int prev = 0, score = 0;
    for(int i = 0; i < dartResult.length(); i++){
        if(dartResult[i] >= '0' && dartResult[i] <= '9'){
            prev = score;
            if(dartResult[i+1] == '0'){
                score = 10;
                i++;
            }
            else score = dartResult[i] - '0';
        }else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T'){
            if(dartResult[i] == 'D') score = pow(score, 2);
            else if(dartResult[i] == 'T') score = pow(score, 3);
            
            if(dartResult[i+1] == '*'){
                answer -= prev;
                prev *= 2;
                score *= 2;
                answer += prev;
                i++;
            }else if(dartResult[i+1] == '#'){
                score *= -1;
            }
            answer += score;
        }        
    }
    return answer;
}

// 백터 활용 풀이
// int solution(string dartResult) {
//     vector<int> v;
//     for(int i = 0, s = 0; i < dartResult.size(); ++i) {
//         if(dartResult[i] >= '0' && dartResult[i] <= '9')
//             s = s * 10 + dartResult[i] - '0';
//         else if(dartResult[i] == 'S') v.push_back(s), s = 0;
//         else if(dartResult[i] == 'D') v.push_back(s * s), s = 0;
//         else if(dartResult[i] == 'T') v.push_back(s * s * s), s = 0;
//         else if(dartResult[i] == '*') {
//             if(v.size() > 1) v.back() *= 2, v[v.size() - 2] *= 2;
//             else v.back() *= 2;
//         } else v.back() = -v.back();

//     }
//     int ans = 0;
//     for(int i = 0; i < v.size(); ++i) ans += v[i];
//     return ans;
// }
