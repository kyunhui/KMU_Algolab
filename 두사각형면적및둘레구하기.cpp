#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int ar = 0, in = 0;
    for (int i = 0; i < t; i++)
    {
        int x1, y1, p1, q1, x2, y2, p2, q2;
        cin >> x1 >> y1 >> p1 >> q1;
        cin >> x2 >> y2 >> p2 >> q2;
        int a, b, c, d, k, l, m, n;
        if (x1 > x2) a = x2, k = x1;
        else a = x1, k = x2;
        if (y1 > y2) b = y2, l = y1;
        else b = y1, l = y2;
        if (p1 > p2) c = p1, m = p2;
        else c = p2, m = p1;
        if (q1 > q2) d = q1, n = q2;
        else d = q2, n = q1;
        if (x1 < x2 && y1 < y2 && p1 > p2 && q1 > q2)//안에 들어가 있을때
        {
            ar = (p1 - x1) * 2 + (q1 - y1) * 2;
            in  = (p1 - x1) * (q1 - y1);
            cout << in << " " << ar << endl;
        }
        else if (x1 > x2 && y1 > y2 && p1 < p2 && q1 < q2)
        {
            ar = (p2 - x2) * 2 + (q2 - y2) * 2;  
            in = (p2 - x2) * (q2 - y2);
            cout << in << " " << ar << endl;          
        }
        else if ((p1 < x2) || (q1 < y2) || (p2 < x1) || (q2 < y1))//겹치는게 1도 없을때
        {
            ar = (p1 - x1 + q1 - y1 + p2 - x2 + q2 - y2) * 2;
            in = (p1 - x1) * (q1 - y1) + (p2 - x2) * (q2 - y2);
            cout << in << " " << ar << endl;          
        }
        else // 부분만 겹칠 때
        {
            ar = (c - a) * 2 + (d - b) * 2;
            in = (p1 - x1) * (q1 - y1) + (p2 - x2) * (q2 - y2) - (m - k) * (n - l);

            cout << in << " " << ar << endl;            
        }
    }
}

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t;
//     for (int test = 0; test < t; test++) {
//         int x[4];
//         int y[4];
//         int round = 0;
//         int range = 0;
//         cin >> x[0] >> y[0] >> x[1] >> y[1];
//         cin >> x[2] >> y[2] >> x[3] >> y[3];
//         int tmp = max(x[1], x[3]);
//         int *x_arr = new int[max(x[1], x[3])]();
//         tmp = max(y[1], y[3]);
//         int x_tmp = 0;
//         int y_tmp = 0;
//         int *y_arr = new int[max(x[1], x[3])]();
//         if (x[1] < x[2] || x[3] < x[0] || y[1] < y[2] || y[3] < y[0]) // 안겹치는 조건
//         {
//             round += abs(x[1] - x[0]) + abs(y[1] - y[0]) + abs(x[3] - x[2]) + abs(y[3] - y[2]);
//             round *= 2;
//             range += abs(x[1] - x[0]) * abs(y[1] - y[0]) + abs(x[3] - x[2]) * abs(y[3] - y[2]);
//         }
//         else // 그 외
//         {
//             for (int i = x[0]; i < x[1]; i++) {
//                 x_arr[i] += 1;
//                 if(x_arr[i] == 2) x_tmp++;
//             }
//             for (int i = x[2]; i < x[3]; i++) {
//                 x_arr[i] += 1;
//                 if(x_arr[i] == 2) x_tmp++;
//             }
//             for (int i = y[0]; i < y[1]; i++) {
//                 y_arr[i] += 1;
//                 if(y_arr[i] == 2) y_tmp++;
//             }
//             for (int i = y[2]; i < y[3]; i++) {
//                 y_arr[i] += 1;
//                 if(y_arr[i] == 2) y_tmp++;
//             }

//             round += abs(x[1] - x[0]) + abs(y[1] - y[0]) + abs(x[3] - x[2]) + abs(y[3] - y[2]);
//             round *= 2;
//             round -= (x_tmp + y_tmp) * 2;
//             range += abs(x[1] - x[0]) * abs(y[1] - y[0]) + abs(x[3] - x[2]) * abs(y[3] - y[2]);
//             range -= (x_tmp * y_tmp);
//         }
//         cout << range << " " << round << endl;
//     }
// }