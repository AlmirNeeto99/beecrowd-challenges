#include <bits/stdc++.h>

#include <numeric>

using namespace std;

int main() {
    int x, y, perimeter, stakes;

    while (cin >> x >> y) {
        perimeter = 2 * (x + y);
        stakes = (int)perimeter / gcd(x, y);
        cout << stakes << endl;
    }

    return 0;
}
