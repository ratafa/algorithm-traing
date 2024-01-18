// 1-H
#include<bits/stdc++.h>
using namespace std;

int minimum = -10000000;
int n,k,s, psum[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> s;
        psum[i] += psum[i-1] + s;
    }
	for(int i = k; i <= n; i++){
		minimum = max(minimum, psum[i] - psum[i - k]);
	}
    cout << minimum;
    return 0;
}