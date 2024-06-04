#include<bits/stdc++.h>
using namespace std;
string a;
int ret;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a;
    for(int i=0; i < a.size(); i++) {
        if(a[i] != a[a.size() - i -1]) {
            ret = 0;
        } else ret = 1;
    }
    cout << ret << '\n';
}