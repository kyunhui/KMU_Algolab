#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int num_max = max(b, d);
        int num_min = min(a, c);
        int *arr = new int[num_max + 1]();
        int num = -1;
        int all = -1;
        for (int i = num_min; i <= num_max; i++) {
            if (i >= a && i <= b) {
                if (arr[i] == 1) num++;
                arr[i] = 1;
            }
            if (i >= c && i <= d) {
                if (arr[i] == 1) num++;
                arr[i] = 1;
            }
        }
        if (num == -1) {
            all = (b - a) + (d - c);
            num = 0;
        }
        else {
            for (int i = num_min; i <= num_max; i++) {
                if (arr[i] == 1) all++;
            }
        }
        cout << num << " " << all << endl;
    }
}