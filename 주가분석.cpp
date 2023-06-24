#include <iostream>
using namespace std;

int main(){
    int t, n, num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int cnt = 0;
        int l = 0, m = 0, r;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if(l == 0){
                l = num;
                continue;
            }
            if(m == 0){
                m = num;
                continue;
            }
            r = num;
            if(m == r){
                continue;
            } 
            else if(l < m && m > r){
                cnt++;
            } 
            l = m;
            m = r;
        }
        cout << cnt << endl;    

    }
    
    return 0;
}