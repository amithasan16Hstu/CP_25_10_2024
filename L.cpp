#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        map<char, int> freq; 
        for (char c : s) {
            freq[c]++;
        }

        vector<char> singles; 
        vector<char> doubles; 

        for (auto& p : freq) {
            if (p.second == 1) {
                singles.push_back(p.first);
            } else if (p.second == 2) {
                doubles.push_back(p.first);
            }
        }

        string result;

        
        for (char c : singles) {
            result += c;
        }

       
        for (char c : doubles) {
            result += c;
            result += c;
        }

        
        cout << result << endl;
    }

    return 0;
}
