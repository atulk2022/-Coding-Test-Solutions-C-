#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> inputList = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    unordered_map<int, int> multipleCount;

    // Initialize map with keys 1–9
    for (int divisor = 1; divisor <= 9; divisor++) {
        multipleCount[divisor] = 0;
    }

    // Count multiples
    for (int number : inputList) {
        for (int divisor = 1; divisor <= 9; divisor++) {
            if (number % divisor == 0) {
                multipleCount[divisor]++;
            }
        }
    }

    // Print output
    cout << "{";
    for (int divisor = 1; divisor <= 9; divisor++) {
        cout << divisor << ": " << multipleCount[divisor];
        if (divisor < 9) cout << ", ";
    }
    cout << "}";

    return 0;
}
