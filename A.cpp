#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int pos = 0, i = 1;
        bool sakurako = true; 

        while (true) {
            int move = (2 * i - 1); 
            
            if (sakurako) {
                pos -= move; 
            } else {
                pos += move; 
            }

            
            if (pos < -n || pos > n) {
                if (sakurako) {
                    cout << "Sakurako" << endl;
                } else {
                    cout << "Kosuke" << endl;
                }
                break;
            }

      
            sakurako = !sakurako;
            i++; 
        }
    }

    return 0;
}
