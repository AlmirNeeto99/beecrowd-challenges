#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, f1, f2;

    cin >> number;

    while (number > 0) {
        cin >> f1 >> f2;

        cout << gcd(f1, f2) << endl;

        number--;
    }

    return 0;
}