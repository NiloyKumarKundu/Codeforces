#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n;
    int a = 0, b = 0;
 
    getline(cin, n);
 
    for(int i = 0; i< n.length(); i++) {
        if(n[i] == '0') {
            a++;
            if(b < 7)
                b = 0;
        } else {
            b++;
            if(a < 7)
                a = 0;
        }
    }
    if(a >= 7 || b >= 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
