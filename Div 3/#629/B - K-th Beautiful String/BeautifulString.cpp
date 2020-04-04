#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        string d(n, 'a');
        for(int i = n - 2; i >= 0; i--) {
            if(k <= (n - i - 1)) {
                d[i] = 'b';
                d[n - k] = 'b';
                cout << d << endl;
                break;
            }
            k -= (n - i - 1);
        }
    }
}