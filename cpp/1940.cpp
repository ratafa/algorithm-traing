// 1-J
#include<bits/stdc++.h>
using namespace std;

int a, b, c, cnt;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    cin >> a >> b;
    int arr[a];
    for(int i=0; i<a; i++){
        cin >> c;
        arr[i] = c;
    }
    for(int j=0; j<(a-1); j++){
        for(int k=j+1; k<a; k++) {
            if(arr[j]+ arr[k] == b){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}