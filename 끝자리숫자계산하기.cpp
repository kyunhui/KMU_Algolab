#include <iostream>
using namespace std;

int main(){
    int t, n, num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int temp = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            temp %= 10;
            temp *= num % 10;
        }
        cout << temp % 10 << endl;
    }
    
}