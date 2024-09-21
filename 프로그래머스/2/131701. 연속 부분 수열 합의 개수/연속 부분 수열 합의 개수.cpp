#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> new_e(elements);
    set<int> s;
    // 원형 만들기
    for(int i=0;i<elements.size()-1;i++){
        new_e.push_back(elements[i]);
    }
    // ex) 7, 9, 1, 1, 4 -> 7, 9, 1, 1, 4, 7, 9, 1, 1
    // 위처럼 원형으로 만들어준 뒤, 반복문을 통해
    // 길이가 1인 수열 7,9,1,1,4
    // 길이가 2인 수열 79, 91, 11, 14, 47
    // 길이가 3인 수열 791, 911, 114, 147, 479
    // 길이가 4인 수열 7911, 9114, 1147, 1479, 4791
    // 길이가 5인 수열 79114, 91147, 11479, 14791, 47911
    // 이런식으로 구한 각 연속 부분 수열들의 합을 set에 넣으면 중복이 제거되므로
    // 편하게 개수를 알 수 있다.
    for(int i=0;i<elements.size();i++){
        vector<int> v;
        for(int j=0;j<elements.size();j++){
            int num = 0;
            for(int k=j;k<i+j+1;k++){
                num += new_e[k];
            }
            v.push_back(num);
        }
        for(int j=0;j<v.size();j++)
            s.insert(v[j]);
    }
    answer = s.size();
    return answer;
}