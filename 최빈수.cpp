#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int arr[101] = {0};
        int num;
        int cnt = 0;
        int temp = 0;
        int answer = 0;
        while (true)
        {
            cin >> num;
            if(num == 0){
                break;
            }
            if(num > 0 && num < 101){
                cnt ++;
                arr[num]++;
            }
        }
        for (int i = 1; i < 101; i++)
        {
            if(temp <= arr[i]){
                temp = arr[i];
                answer = i;
            }
        }
        if(cnt != 0){
            cout << answer << endl;
        }else{
            cout << 0 << endl;
        }
        
    }
    
}