#include<bits/stdc++.h>
using namespace std; 
int num[26];
string a;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a;
    for(char str : a) num[str - 'a']++;
    for(int i=0; i<26; i++) cout << num[i] << ' ';
}