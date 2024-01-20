#include<bits/stdc++.h>
using namespace std;

int n, ret, a1, a2, b1, b2, c;
string s;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        ret = 0;
        for(int j=0; j<s.size(); j++){
            if(s[j] == 'A') {
                if(a1 == 0) a1 = j;
                else a2 = j;
            }
            if((a1 + a2) % 1) ret++;
            if(s[j] == 'B') {
                if(b1 == 0) b1 = j;
                else b2 = j;
            }
            if((b1 + b2) % 1) ret++;
        }
        if(ret) c++;
    }
    cout << c;
    return 0;
}

    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);