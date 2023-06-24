#include <iostream>
using namespace std;

int main(){
    int t, num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int zero = 0, one = 0;
        cin >> num;
        while (num > 0){
            if(num%2 == 0){
                zero++;
            }else{
                one++;
            }
            num /= 2;
        }
        cout << zero << " " << one << endl;
        
    }
    return 0;
}
