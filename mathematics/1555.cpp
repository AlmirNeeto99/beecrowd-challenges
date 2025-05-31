#include <bits/stdc++.h>

using namespace std;

int rafael(int x, int y) { return ((3 * x) * (3 * x)) + y * y; }

int beto(int x, int y) { return 2 * (x * x) + ((5 * y) * (5 * y)); }

int carlos(int x, int y) { return -100 * x + (y * y * y); }

int main() {
    int num, x, y, r_result, b_result, c_result;

    cin >> num;

    while (num > 0) {
        cin >> x >> y;

        r_result = rafael(x, y);
        b_result = beto(x, y);
        c_result = carlos(x, y);

        if (r_result > b_result && r_result > c_result) {
            cout << "Rafael ganhou" << endl;
        } else if (b_result > r_result && b_result > c_result) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }

        num--;
    }

    return 0;
}