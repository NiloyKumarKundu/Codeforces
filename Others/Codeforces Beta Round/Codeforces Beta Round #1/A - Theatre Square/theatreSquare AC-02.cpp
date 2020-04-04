#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, a;
    cin >> n >> m >> a;
 
    long long resultOne = n / a;
    long long resultTwo = m / a;
 
    if(n % a != 0)
        resultOne++;
    if(m % a != 0)
        resultTwo++;
 
    cout << resultOne*resultTwo << endl;
 
}