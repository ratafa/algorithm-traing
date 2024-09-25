#include<bits/stdc++.h>
using namespace std;

int c[26];
string v;

int main(){
    cin >> v;
    for(int i = 0; i<v.size(); i++) {
        c[v[i] - 97]++;
    }

    for(int i = 0; i<26; i++) {
        cout << c[i] << " ";    
    }

    return 0;
}