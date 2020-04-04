#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b, sum = 0, max = 0;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        sum += b;
        sum -= a;
        if(max < sum)
            max = sum;
    }
    if(max < 0)
        cout << "0" << endl;
    else
        cout << max << endl;
}