#include <bits/stdc++.h>
using namespace std;

int toBinary(int num) {
    if(num == 0 ) return 0;
    
    string binary = "";
    while(num > 0){
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    
    return count(binary.begin(), binary.end(), '1');
}

int solution(int n) {
    int answer = 0;
    int a = toBinary(n);
    
    for(int i=n+1; i<1000000; i++) {
        if(toBinary(i) == a) {
            answer = i;
            break;
        }
    }
    
    return answer;
}