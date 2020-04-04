#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m, a;
 
    cin >> n >> m >> a;
 
    long long result = ((m+a-1)/a) * ((n+a-1)/a);
 
    cout << result << endl;
}