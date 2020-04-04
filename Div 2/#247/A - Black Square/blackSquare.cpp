#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[4];
    string str;
    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    cin >> str;
    int sum = 0;
 
    for(int i = 0; i < str.length(); i++) {
        sum += arr[ (int) str[i] - 49];
    }
    cout << sum << endl;
}