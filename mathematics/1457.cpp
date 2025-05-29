#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    string numAsS;
    int k, j, diff;
    long num, alexandria;

    while (n > 0) {
        num = 0;
        k = 0;
        numAsS.clear();
        string line;
        cin >> line;
        for (char c : line) {
            if (c != '!') {
                numAsS += c;
            } else {
                k++;
            }
        }
        num = stoi(numAsS);

        j = 0;
        alexandria = 1;
        while (1) {
            diff = num - j * k;
            if (diff < 1) break;
            alexandria *= diff;
            j++;
        }
        cout << alexandria << endl;
        n--;
    }

    return 0;
}