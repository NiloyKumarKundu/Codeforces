#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long t, n, k, sum = 0, count = 0;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        if(k * k <= n && (n % 2 == k % 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}