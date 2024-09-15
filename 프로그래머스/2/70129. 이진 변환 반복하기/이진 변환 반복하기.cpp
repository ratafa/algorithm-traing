#include <bits/stdc++.h>
using namespace std;

string toBinary(int n) {
    if (n == 0) return "0"; // 0일 경우 바로 반환

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary; // 나머지를 앞에 추가
        n /= 2; // 2로 나누기
    }
    return binary;
}


vector<int> solution(string s) {
    vector<int> answer;
    int t = 0;
    int z = 0;
    string ret = s;
    
    while(ret != "1") {
        string test;
        int a = 0;
        for(char i:ret) {
            if(i == '1') a++;
            else z++;
        }
        t++;
        test = toBinary(a);
        ret = test;
        cout << "z:" << z << "t:" << t << "ret:" << ret << "/";
    }
    
    answer.push_back(t);
    answer.push_back(z);
    
    return answer;
}