#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int answer = 1;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
        
            if(i == 0 && (s[i] > 47 && s[i] < 58)){
                answer = 0;
            }
            if(!((s[i] >64 && s[i] < 91) || (s[i] > 96 && s[i] < 123) || (s[i] > 47 && s[i] < 58) || s[i] == 95)){
                answer = 0;
            }
        }
        cout << answer << endl;

    }
    
}