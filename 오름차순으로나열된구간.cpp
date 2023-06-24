#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[101] = {0};
    for (int i = 0; i < t; i++)
    {
        int sum = 0;
        int cnt = 0;
        int flag = 0;
        int n, num;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(arr[0] <= arr[1]){
            flag = 1;
        }else{
            flag = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            if(flag==1){
                if(arr[i-1] <= arr[i]){
                    sum += arr[i-1];
                }else{
                    sum += arr[i-1];
                    flag = 0;
                    cnt++;
                }
            }
            if(flag == 0){
                if(arr[i-1] <= arr[i]){
                    sum += arr[i-1];
                    flag = 1;
                }
                cout << sum << " ";
            }
        }
        cout << cnt << " " << sum << endl;
        
    }
    
}