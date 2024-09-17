#include<bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    stack<char> st;
    bool answer = true;
    
    for(auto c : s) {
        if(c == '(') {
            st.push(c);
        } else if(c == ')') {
            if(st.empty()) return false;
            else st.pop();
        }
    }

    return st.empty();
}

// 다른 풀이 방식
// bool solution(string s)
// {
//     int n = 0;
//     for (int i = 0; i < s.length(); i++) {
//         if (n < 0)
//             return false;
//         if (s[i] == '(')
//             n++;
//         else if (s[i] == ')')
//             n--;
//     }
//     return n == 0;
// }