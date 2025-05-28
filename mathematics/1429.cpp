#include <bits/stdc++.h>

using namespace std;

int factorial(int number) {
    if (number == 1) return 1;
    return number * factorial(number - 1);
}

int main() {
    string input;

    int acmNumber, dec;
    int mThousand, thousand, hundred, ten, one;

    while (1) {
        dec = 0;
        cin >> input;
        if (input == "0") {
            break;
        }

        int position = input.size();

        for (char c : input) {
            dec += atoi(&c) * factorial(position);
            position--;
        }
        cout << dec << endl;
    }

    return 0;
}