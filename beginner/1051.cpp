#include <bits/stdc++.h>

using namespace std;

int main() {
    double salary, rest, tax = 0.0;

    cin >> salary;

    rest = salary - 4500.0;
    if (rest > 0.0) {
        tax += rest * 0.28;
        salary -= rest;
    }
    rest = salary - 3000.01;
    if (rest > 0.0) {
        tax += rest * 0.18;
        salary -= rest;
    }
    rest = salary - 2000.01;
    if (rest > 0.0) {
        tax += rest * 0.08;
        salary -= rest;
    }

    if (tax == 0.0) {
        cout << "Isento" << endl;
    } else {
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }

    return 0;
}