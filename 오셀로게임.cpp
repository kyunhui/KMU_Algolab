#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num;
        char arr[9][9];
        cin >> num;
        int cnt = 1;
        for (int i = 0; i < num; i++)
        {
            int n, m;
            cin >> n >> m;
            cnt ++;
            
            for (int i = 1; i < 9 ; i++)
            {
                for (int j = 1; j < 9; j++)
                {
                    if(cnt/2 == 1) arr[n][m] = 'X';
                    else if(cnt / 2 == 0) arr[n][m] = 'O';
                    if((i==4 && j==4) || (i==5 && j==5)) arr[i][j] = 'O';
                    else if((i==4 && j==5) || (i==5 && j==4)) arr[i][j] = 'X';
                    else arr[i][j] = '+';
                }
                
            }
        }
        for (int i = 1; i < 9; i++)
        {
            for (int j = 1;j < 9; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
            
        }
        
    }
    
    return 0;
}