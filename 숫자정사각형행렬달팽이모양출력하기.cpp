
#include <iostream>
#include <vector>
using namespace std;
int** initialArr(int n);

int main(){
    int t, n, a, b;
    cin >> t;
    int number = 1;
    vector<int> num(b+1);

    for (int p = 0; p < t; p++)
    {
        cin >> n >>  a >> b;
        int **arr = initialArr(n); 
        int temp = 1;
        int dir = 0;
        int idx = 0;

        int i = 0, j = 0;
        while (idx  < b + 1){
            if(dir == 0){
                for (int k = 0;  k < n+1; k++)
                {
                    num[idx] = arr[i][j];
                    j++;
                    idx++;
                    if(j == n-temp){
                        dir = 1;
                        break;
                    }   
                }
            }
            else if(dir == 1){
                for (int k = 0; k < n+1; k++)
                {
                    num[idx] = arr[i][j];
                    idx++;
                    i++;
                    if(i == n-temp){
                        dir = 2;
                        break;
                    }
                }
            }
            else if(dir==2){
                for (int k = 0; k < n+1; k++)
                {
                    num[idx] = arr[i][j];
                    idx++;
                    j--;
                    if(j == temp - 1){
                        dir = 3;
                        break;
                    }
                }
            }
            else if (dir == 3){
                for (int k = 0; k < n+1; k++)
                {
                    num[idx] = arr[i][j];
                    idx++;
                    i--;
                    if(i == temp){
                        dir = 0;
                        temp ++;
                        break;
                    }
                }
            }
            else{dir=0;}
        }
        for (int z = a-1; z < b; z++)
        {
            cout << num[z] << " ";
        }
        cout << endl;
        // for(int i = 0; i < n; i++) {
        //     delete[] arr[i];
        // }
        // delete[] arr;
    }
    
}
int** initialArr(int n) {
    int number = 1;
    int** arr = new    int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new    int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = number++;
        }
    }
    return arr;
}
            
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }
    

// // }
// #include <iostream>
// using namespace std;

// int** initialArr(int n);
// int main() {
//     int t; // Number of Testcase
//     int tmp = 0;
//     int a, b, n;
//     cin >> t;
//     for (int t_case = 0; t_case < t; t_case++) {
//         cin >> n >> a >> b;
//         int **arr = initialArr(n);
//         int *num = new int[n * n];
//         int s_cnt = 0;
//         int step = 1;
//         int x = -1;
//         int y = 0;
//         int tmp = n;
//         while (s_cnt < n * n) {
//             for(int i = 0; i < tmp; i++) { 
//                 x += step;
//                 num[s_cnt++] = arr[y][x];
//             }
//             tmp--;
//             if (tmp < 1) break;
//             for(int i = 0; i < tmp; i++) {
//                 y += step;
//                 num[s_cnt++] = arr[y][x];
//             }
//             step = -step;
//         }
//         for (int i = a - 1; i < b; i++)
//             cout << num[i] << " ";
//         cout << endl;
//     }
// }

// int** initialArr(int n) {
//     int **arr = new int*[n];
//     for (int i = 1; i <= n; i++) {
//         arr[i - 1] = new int[n];
//         for (int j = 1; j <= n; j++) {
//             arr[i - 1][j - 1] = (i - 1) * n + j;
//         }
//     }
//     return arr;
// }
