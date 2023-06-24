#include <iostream>
using namespace std;

int main(){

    int t, n, num;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
    }
    
}