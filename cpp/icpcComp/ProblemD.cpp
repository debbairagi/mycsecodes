#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int T, a, b, c, k, t = 0;

int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}

int main() {
    cin >> T;
    while (T--) {
        cin >> a >> b >> c >> k;
        int g = gcd(a, gcd(b, c));
        cout << "Case " << ++t << ": ";
        if (g * k >= max(a, max(b, c))) cout << "Peaceful\n";
        else cout << "Fight\n";
    }

    return 0;
}