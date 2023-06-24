#include <iostream>
using namespace std;
int main() {
    int day_leep[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_normal[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int total = 0;
        int cnt = 0;
        int y, m, d;
        cin >> y >> m >> d;
        total = (y - 1) * 365;  //일단 y년 이전 년도들을 365로 두고 
        for (int i = 1; i < y; i++){ //y년 이전 년도들이 윤년이면 하루가 더 많으니까 윤년인 만큼 ++ 해주고 total에 더하기 
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
                cnt++;
            } 
        } 
        total += cnt;
        for (int i = 1; i < m; i++) { // y년도에서 m월까지 더해야하니까 i는 부터 m까지 
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){ //윤년이면 
                total += day_leep[i];
            } 
            else total += day_normal[i];
        }
        total += d;
        cout << (total % 7) << endl;
    }
}