// 1-H
#include<bits/stdc++.h>
using namespace std;

int a,b;
string s;
map<string, int> _map1;
string arr[100001];

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        cin >> s;
        _map1[s] = i+1;
        arr[i+1] = s;
    }
    for(int i=0; i<b; i++) {
        cin >> s;
        if(atoi(s.c_str()) == 0){
            cout << _map1[s] << "\n";
        }else{
            cout << arr[atoi(s.c_str())] << "\n";
        }
    }
    return 0;
} 