#include <iostream>
using namespace std;

int main() {
    long long num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num; // Handle negative numbers
        }

        while (num > 0) {
            num /= 10;
            count++;
        }
    }

    cout << "Number of digits = " << count << endl;

    return 0;
}