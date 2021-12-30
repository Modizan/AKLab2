#include <iostream>
#include "calculator.h"

using namespace std;

char menu() {
    cout << endl;
    cout << "Choose operation:" << endl;
    cout << "a) Add" << endl;
    cout << "s) Substract" << endl;
    cout << "m) Multiply" << endl;
    cout << "d) Divide" << endl;
    cout << "q) Quit" << endl;
    cout << "> ";

    char userInput;
    cin >> userInput;

    return userInput;
}



int main() {
    cout << "Welcome to calculator!" << endl;

    Calculator calc;
    
    char userInput;
    double a, b;

    while (true) {
        userInput = menu();

        if (userInput == 'q') {
            break;
        }

        cout << "Enter first operand:";
        cin >> a;

        cout << "Enter second operand:";
        cin >> b;

        cout << endl;
        
        switch (userInput) {
            case 'a':
                cout << "Result: " << calc.Add(a, b) << endl;
                break;
            case 's':
                cout << "Result: " << calc.Sub(a, b) << endl;
                break;
            case 'm':
                cout << "Result: " << calc.Mul(a, b) << endl;
                break;
            case 'd':
                cout << "Result: " << calc.Div(a, b) << endl;
                break;
            default:
                cerr << "Unknown command" << endl;
        }
    }
                
    cout << "Goodbye!" << endl;
    return 0;
}

