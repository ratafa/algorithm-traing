#include<bits/stdc++.h>
using namespace std;

int t, n;
string a,b;
int main() {
    cin >> t;
    while(t--) {
        map<string, int>SIMap;
        cin >> n;
        for(int i = 0; i<n; i++;){
            cin >> a >> b;
            SIMap[b]++;
        }
        long long ret = 1;
        for(auto c : SIMap) {
            ret *= SIMap[c]
        }
        ret--;
        cout << ret < "\n";
    }
    return 0;
}