// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     cout << int(a);
    
//     return 0;
// }











#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    map<char, int> mp; // 각 문자의 마지막 위치를 저장하는 맵
    vector<int> result;
    
    for (int i=0; i < s.size(); ++i) {
        if(mp.find(s[i]) != mp.end()) result.push_back(i-mp[s[i]]); 
        else result.push_back(-1);
        mp[s[i]] = i;
    }

    return result;
}

    // s를 순회하는 for문을 돌린다.
    // 각 글자에 대한 i번 째 값을 map 값에 넣는다.
    // 만약 i번 째에서, mp에 s[i]번 째 값이 있다면 result에 i - mp[s[i]]를 해준다.
    // 값이 없는 경우(처음으로 값이 들어오는 경우)라면 -1를 result에 넣어준다.