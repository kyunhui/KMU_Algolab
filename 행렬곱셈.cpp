#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r, s, t;
        cin >> r >> s >> t;
        int arr_a[200][200];
        int arr_b[200][200];
        int arr_c[200][200];

        for (int i = 0; i < r; i++){
            for (int j = 0; j < s; j++){
                cin >> arr_a[i][j];
            }
        }
        for (int i = 0; i < s; i++){
            for (int j = 0; j < t; j++){
                cin >> arr_b[i][j];
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++) {
                arr_c[i][j] = 0;
                for (int k = 0; k < s; k++)
                    arr_c[i][j] += arr_a[i][k] * arr_b[k][j];
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++)
                cout << arr_c[i][j] << " ";
            cout << endl;
        }
        
    }
    
}