#include<bits/stdc++.h>
using namespace std; 
int a[9];
int sum;
pair<int, int> ret;
vector<int> v;
void solve(){
    for(int i=0; i<9; i++){
        for(int j=0; j<i; j++){
            if(sum-a[i]-a[j] == 100) {
                ret = {i,j};
                return;
                // return은 break와 다르게 solve문 자체를 빠져나옵니다.
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0; i<9; i++) {
        cin >> a[i]; // cin은 개행문자를 기준으로 받습니다. 그러니 20 7 23 19 10 15 25 8 13 이렇게 받을 수 있습니다.
        sum += a[i]; 
    }
    solve();
    for(int i=0; i<9; i++) {
        if(ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for(int i : v) cout << i << " ";
    return 0;
}

