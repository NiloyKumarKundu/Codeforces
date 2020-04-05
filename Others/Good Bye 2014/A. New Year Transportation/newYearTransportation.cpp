#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

vector<int> vc[MAX];
vector<bool> visited;
int flag = 0;

int DFS(int n, int p) {
    visited[n] = true;
    for(int x : vc[n]) {
        if(!visited[x]) {
            if(x == p) {
                flag = 1;
                break;
            } else {
                DFS(x, p);
            }
        }
    }
    return flag;
}

int main() {
    int n, k;
    cin >> n >> k;
    visited.assign(MAX, false);
    for(int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        vc[i + 1].push_back((i + 1) + a);
    }
    int result = DFS(1, k);
    if(result)
        cout << "YES\n";
    else
        cout << "NO\n";
}
