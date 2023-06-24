#include <iostream>
using namespace std;

int main()
{
    int t, n, choice;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a = 0, b =0, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> choice;
            if (choice == 1){
                a++;
            }else if (choice == 2){
                b++;
            }else if (choice == 3){
                c++;
            }
        }
        if (a>0 && b>0 && c>0){
            cout << 0 << endl;
        }else if (a==n || b==n || c==n){
            cout << 0 << endl;
        }else if (a==0 && b > 0 && c > 0){
            cout << c << endl;
        }else if (b==0 && a > 0 && c > 0){
            cout << a << endl;
        }else if (c==0 && a > 0 && b > 0){
            cout << b << endl;
        }
        
    }
    return 0;
}