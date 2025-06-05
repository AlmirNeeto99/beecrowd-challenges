#include <iostream>

using namespace std;

int get_number_of_squares(int num_squares) {
    if (num_squares == 1) {
        return 1;
    };
    return num_squares * num_squares + get_number_of_squares(num_squares - 1);
}

int main() {
    int num_squares;
    while (cin >> num_squares) {
        if (num_squares == 0) {
            break;
        }
        cout << get_number_of_squares(num_squares) << endl;
    }
    return 0;
}