#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t;
    cin >> t;
 
    while(t--) {
        string g, a, b;
        int cntA(0), cntB(0);
        cin >> n;
        getchar();
        getline(cin, g);
 
        for (int i = 0; i < n; i++) {
            if (a > b) {
                a += '0';
                b += g[i];
            } else if (g[i] == '0') {
                a += '0';
                b += '0';
                cntA += 0;
                cntB += 0;
            } else if (g[i] == '2') {
                a += '1';
                b += '1';
                cntA += 1;
                cntB += 1;
            } else if (g[i] == '1') {
                a += '1';
                b += '0';
                cntA += 1;
                cntB += 0;
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
}