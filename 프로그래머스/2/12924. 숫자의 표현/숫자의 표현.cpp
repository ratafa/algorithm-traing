#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    int t = 0;
    
    while(t <= n) {
        int test = 0;
        
        for(int i=1+t; i<=n; i++){
            test += i;
            if(test == n) {
                answer++;
                break;
            }
            if(test > n){
                break;
            }
        }
        t++;
    }
    
    return answer;
}


// int solution(int n) {
//     int answer = 0;
//     int start = 1; // 시작점 초기화

//     while (start <= n) {
//         int sum = 0; // 누적 합 초기화
        
//         for (int j = start; j <= n; j++) { // j는 start부터 n까지 반복
//             sum += j; // j를 누적 합에 더함
            
//             if (sum == n) {
//                 answer++; // sum이 n과 같으면 정답 증가
//                 break; // 내부 루프 종료
//             }
//             if (sum > n) {
//                 break; // 내부 루프 종료
//             }
//         }
//         start++; // start의 값 증가
//     }

//     return answer;
// }

// int solution(int n) {
//     int answer = 0;

//     for (int i = 1; i <= n; i++) {
//         int sum = 0;
//         for (int j = i; j <= n; j++) {
//             sum += j;
//             if (sum == n) {
//                 answer++;
//                 break; // sum이 n과 같아지면 더 이상 진행할 필요 없음
//             }
//             if (sum > n) {
//                 break; // sum이 n을 넘어가면 더 이상 진행할 필요 없음
//             }
//         }
//     }

//     return answer;
// }
