#include <iostream>
using namespace std;

int main(){
    int t, n, num;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a=0, b=0, c=0, d=0, f=0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if(num >= 90){
                a++;
            }
            else if(80 <= num && num < 90){
                b++;
            } 
            else if(70 <= num && num < 80){
                c++;
            } 
            else if(60 <= num && num < 70){
                d++;
            } 
            else{
                f++;
            } 
        }
        cout << a << " " << b << " " << c << " " << d << " " << f << endl;

        
    }
    
}