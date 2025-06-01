#include <bits/stdc++.h>

using namespace std;

int main() {
    int num, price, times, debt = 0;

    while (1) {
        cin >> num;
        if (num == -1) {
            break;
        }
        debt = 0;
        times = 0;
        while (num > 0) {
            cin >> price;
            debt += price;
            if (debt % 100 == 0) times++;
            num--;
        }
        cout << times << endl;
    }

    return 0;
}