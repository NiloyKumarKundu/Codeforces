#include <iostream>
using namespace std;
 
int main() {
    int n, count = 0;
    string s;
    cin >> n;
    getchar();
    getline(cin, s);
 
    for(int i=0; i<n; i++) {
        if(s[i] == s[i+1])
            count++;
    }
 
    cout << count << endl;
 
 
    return 0;
}
