#include <bits/stdc++.h>
using namespace std;

void recurr(int n, int i) {
    if (i > n) return;
    
    recurr(n, i+1);      // recursive step
    cout << i << " ";      // process before recursion
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    recurr(n, 1);
    return 0;
}
