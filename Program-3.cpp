#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cin >> inputNumber;

    int maxOddLimit = (inputNumber % 2 == 0) ? inputNumber - 1 : inputNumber;

    for (int oddValue = 1; oddValue <= maxOddLimit; oddValue += 2) {
        cout << oddValue;
        if (oddValue + 2 <= maxOddLimit) cout << ", ";
    }

    return 0;
}
