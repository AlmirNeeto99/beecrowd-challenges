#include <bits/stdc++.h>

using namespace std;

int main() {
    int instances, numberLines, splits;

    cin >> instances;

    while (instances > 0) {
        cin >> numberLines;
        splits = 1;

        while (numberLines > 0) {
            splits += numberLines;
            numberLines--;
        }

        cout << splits << endl;

        instances--;
    }

    return 0;
}