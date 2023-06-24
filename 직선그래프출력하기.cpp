#include <iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {   
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i+j == n-1 && (i!=n/2 && j!=n/2)){
                    cout << "*";
                }else if(j== n/2 && i!=n/2){
                    cout << "I";
                }else if(i==n/2 && j==n/2){
                    cout << "O";
                }else if(i==n/2){
                    cout << "+";
                }else{
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    return 0;
    
}