#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t, a, b, result = 0;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if(a < b) {
            result = b - a;
        } else {
            int c = a % b;
            if(c == 0) {
                result = c;
            } else {
                result = b - c;
            }
        }
        cout << result << "\n";
    }
}