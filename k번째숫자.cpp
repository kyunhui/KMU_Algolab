#include <iostream>
using namespace std;

int main() {
    int t, k;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        cin >> k;
        
        int cnt = 0; // 자리수 카운터
        int i = 1; // 자연수 카운터
        while (cnt < k) {
            // i가 몇 자리 수인지 계산
            int digits = 1; // 자리수
            int temp = i;
            while (temp >= 10) {
                digits++;
                temp /= 10;
            }
                
            cnt += digits; // 자리수를 카운트에 더함
            i++; // 다음 자연수로 이동
        }
        
        // k번째 자리수가 속한 자연수를 i-1으로 계산
        i--;
        // k번째 자리수가 속한 자연수의 digits 자리 중 몇 번째인지 계산
        int remainder = cnt - k;
        // i번째 자연수에서 remainder만큼 오른쪽으로 이동하여 k번째 자리수 계산
        for (int j = 0; j < remainder; j++) {
            i /= 10;
        }
        int ans = i % 10;
        
        cout << ans << endl;
    }
    
    
    return 0;
}