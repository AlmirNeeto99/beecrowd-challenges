#include <bits/stdc++.h>

using namespace std;

int area(int x, int y) { return (int)(x * y) / 2; }

int main() {
    int num, x, y;

    cin >> num;

    while (num > 0) {
        cin >> x >> y;
        cout << area(x, y) << " cm2" << endl;
        num--;
    }

    return 0;
}