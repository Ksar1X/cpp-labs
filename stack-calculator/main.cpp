#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cstdlib> 

using namespace std;

class Calculator {
private:
    stack<double> values;

    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }

    bool isOperator(const string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/";
    }

    bool isNumber(const string& s) {
        if (s.empty()) return false;
        int start = 0;
        if (s[0] == '-' && s.size() > 1) start = 1; 
        
        bool hasDecimal = false;
        for (int i = start; i < s.size(); ++i) {
            if (s[i] == '.') {
                if (hasDecimal) return false; 
                hasDecimal = true;
            } else if (!isdigit(s[i])) {
                return false;
            }
        }
        return true;
    }

public:
    double calculate(const string& expression) {
        while (!values.empty()) values.pop();

        stringstream ss(expression);
        string token;

        while (ss >> token) {
            if (isOperator(token)) {
                if (values.size() < 2) {
                    cout << "Not enough operands for " << token << endl;
                    return 0;
                }

                double b = values.top(); values.pop();
                double a = values.top(); values.pop();

                if (token == "+") values.push(add(a, b));
                else if (token == "-") values.push(subtract(a, b));
                else if (token == "*") values.push(multiply(a, b));
                else if (token == "/") values.push(divide(a, b));

            } else if (isNumber(token)) {
                values.push(atof(token.c_str()));
            } else {
                cout << "Unknown token " << token << endl;
                return 0;
            }
        }

        if (values.size() != 1) {
            cout << "Invalid RPN structure!" << endl;
            return 0;
        }

        return values.top();
    }
};

int main() {
    Calculator calc;

    cout << "Enter an RPN expression (e.g., '5 3.5 + 2 * 10 -'): ";
    string input;
    getline(cin, input);
    
    cout << "Calculating: " << input << endl;
    double result = calc.calculate(input);
    cout << "Final Result: " << result << endl;

    return 0;
}