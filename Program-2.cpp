#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cin >> inputNumber;

    for (int index = 0; index < inputNumber; index++) {
        int oddValue = 2 * index + 1;
        cout << oddValue;

        if (index < inputNumber - 1) cout << ", ";
    }

    return 0;
}
