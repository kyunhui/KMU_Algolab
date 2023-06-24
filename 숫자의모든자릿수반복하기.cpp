#include <iostream>
using namespace std;

long long getmultifly(long long num){
    long long result = 1;
    while (num > 0){
        int temp = num % 10;
        if (temp != 0){
            result *= temp;
        }
        num /= 10;
    }
    return result;
}
int main(){
    int t ;
    long long num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        int result = getmultifly(num);
        while (result >= 10){
            result = getmultifly(result);
        }
        cout << result << endl;
    }
    return 0;
    
}