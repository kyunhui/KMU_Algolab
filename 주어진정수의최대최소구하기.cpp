#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t, n, num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> num;
            if (num > maxVal) maxVal = num;
            if (num < minVal) minVal = num;
        }
        cout << maxVal << " " << minVal << endl;
    }
    return 0;
}