#include <iostream>
using namespace std;

class Calculator {
public:
    double calculate(double numberA, double numberB, const string &operationType) {
        if (operationType == "add") return numberA + numberB;
        else if (operationType == "sub") return numberA - numberB;
        else if (operationType == "mul") return numberA * numberB;
        else if (operationType == "div") {
            if (numberB == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return numberA / numberB;
        } else {
            cout << "Invalid operation type!" << endl;
            return 0;
        }
    }
};

int main() {
    double numberA, numberB;
    string operationType;

    cout << "Enter number A: ";
    cin >> numberA;

    cout << "Enter number B: ";
    cin >> numberB;

    cout << "Enter operation (add / sub / mul / div): ";
    cin >> operationType;

    Calculator calculator;
    double result = calculator.calculate(numberA, numberB, operationType);

    cout << "Result: " << result << endl;
    
    return 0;
}
