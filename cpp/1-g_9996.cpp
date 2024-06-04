// 1-G

#include<bits/stdc++.h> 
using namespace std;   
int n; 
string s, ori_s, pre, suf; 
int main(){
    cin >> n;
    cin >> ori_s;  
    int pos = ori_s.find('*');  
    pre = ori_s.substr(0, pos); 
    suf = ori_s.substr(pos + 1); 
    for(int i = 0; i < n; i++){
        cin >> s; 
        if(pre.size() + suf.size() > s.size()){
            cout << "NE\n";
        }else{
            if(pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA\n";
            else cout <<"NE\n";  
        } 
    } 
    return 0;
} 

// 내 풀이
// #include <bits/stdc++.h>
// using namespace std;

// int num;
// string condition;
// vector<string> v;

// vector<string> splitFunc(string input, string delimeter) {
//     vector<string> ret;
//     long long pos = 0;
//     string token = "";
//     while((pos = input.find(delimeter)) != string::npos) {
//         token = input.substr(0, pos);
//         ret.push_back(token);
//         input.erase(0, pos+delimeter.length());
//     }
//     ret.push_back(input);
//     return ret;
// }

// int main() {
//     cin >> num;
//     cin >> condition;
//     vector<string> splitedCondition = splitFunc(condition, "*");
//     for(int i = 0; i<num; i++) {
//         string input;
//         cin >> input;
//         v.push_back(input);
//     }

//     for(string s : v) {
//             if((s[0] == splitedCondition[0][0]) && (s[s.size() - 1] == splitedCondition[1][0])) {
//                 cout << "DA" << "\n";
//             } else {
//                 cout << "NE" << "\n";
//             }
//     }
//     return 0;
// }