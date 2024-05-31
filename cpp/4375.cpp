// 1-O
#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    while(cin >> n){
        int m = 1, k = 1;
        while(1){
            if(m % n == 0) {
                cout << k << '\n';
                break;    
            }
            m = m * 10 + 1;
            m %= n;
            k++;
        }
    }
    return 0;
}

// https://velog.io/@dianestar/%EB%B0%B1%EC%A4%80BOJ-4375%EB%B2%88-1