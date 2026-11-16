// ============================================================
//  CALCULATOR - Git Workshop
//
//  RULES:
//   1. Samo promijenite "return 0" unutar vaše funkcije.
//   2. Ne brišite komentare.
//   3. Ne dirajte funkcije od drugih ljudi
//   4. Ne mijenjajte ništa ispod DO NOT EDIT linije.
//
//  Svaka funkcija prima dva broja (a i b) i vraæa rezultat. 
// Neke funkcije koriste samo prvi broj (a), a neke koriste oba broja (a i b).
// U sluèaju ako se koristi samo prvi broj, drugi broj (b) se može ignorisati.
// ============================================================

#include <iostream>
#include <cmath>

using namespace std;


// ===== 1. ADD: return a + b =====
double add(double a, double b) {
    return 0; // TODO
}


// ===== 2. SUBTRACT: return a - b =====
double subtract(double a, double b) {
    return 0; // TODO
}


// ===== 3. MULTIPLY: return a * b =====
double multiply(double a, double b) {
    return 0; // TODO
}


// ===== 4. DIVIDE: return a / b (what if b is 0?) =====
double divide(double a, double b) {
    return 0; // TODO
}


// ===== 5. MODULO: remainder of a / b (hint: fmod(a, b)) =====
double modulo(double a, double b) {
    return 0; // TODO
}


// ===== 6. POWER: a to the power of b (hint: pow(a, b)) =====
double power(double a, double b) {
    return 0; // TODO
}


// ===== 7. SQUARE ROOT: square root of a, ignore b (hint: sqrt(a)) =====
double squareRoot(double a, double b) {
    return 0; // TODO
}


// ===== 8. SQUARE: a * a, ignore b =====
double square(double a, double b) {
    return 0; // TODO
}


// ===== 9. CUBE: a * a * a, ignore b =====
double cube(double a, double b) {
    return 0; // TODO
}


// ===== 10. ABSOLUTE VALUE: |a|, ignore b (hint: fabs(a)) =====
double absolute(double a, double b) {
    return 0; // TODO
}


// ===== 11. FACTORIAL: a! for whole numbers, ignore b (hint: use a loop) =====
double factorial(double a, double b) {
    return 0; // TODO
}


// ===== 12. PERCENTAGE: a percent of b (example: 10 and 50 gives 5) =====
double percentage(double a, double b) {
    return 0; // TODO
}


// ===== 13. AVERAGE: the average of a and b =====
double average(double a, double b) {
    return 0; // TODO
}


// ===== 14. MAXIMUM: the bigger of a and b =====
double maximum(double a, double b) {
    return 0; // TODO
}


// ===== 15. MINIMUM: the smaller of a and b =====
double minimum(double a, double b) {
    return 0; // TODO
}


// ===== 16. GCD: greatest common divisor of a and b (hint: loop) =====
double gcd(double a, double b) {
    return 0; // TODO
}


// ===== 17. LCM: least common multiple of a and b (hint: a * b / gcd) =====
double lcm(double a, double b) {
    return 0; // TODO
}


// ===== 18. HYPOTENUSE: sqrt(a*a + b*b) =====
double hypotenuse(double a, double b) {
    return 0; // TODO
}


// ============================================================
//  DO NOT EDIT BELOW THIS LINE (teacher's code)
// ============================================================

int main() {
    cout << "===== TEAM CALCULATOR =====" << endl;
    cout << " 1. Add" << endl;
    cout << " 2. Subtract" << endl;
    cout << " 3. Multiply" << endl;
    cout << " 4. Divide" << endl;
    cout << " 5. Modulo" << endl;
    cout << " 6. Power" << endl;
    cout << " 7. Square root (uses first number only)" << endl;
    cout << " 8. Square (uses first number only)" << endl;
    cout << " 9. Cube (uses first number only)" << endl;
    cout << "10. Absolute value (uses first number only)" << endl;
    cout << "11. Factorial (uses first number only)" << endl;
    cout << "12. Percentage (a percent of b)" << endl;
    cout << "13. Average" << endl;
    cout << "14. Maximum" << endl;
    cout << "15. Minimum" << endl;
    cout << "16. GCD" << endl;
    cout << "17. LCM" << endl;
    cout << "18. Hypotenuse" << endl;

    int choice;
    double a, b;

    cout << "Choose an operation (1-18): ";
    cin >> choice;
    cout << "Enter two numbers (a b): ";
    cin >> a >> b;

    double result = 0;

    switch (choice) {
    case 1:  result = add(a, b);        break;
    case 2:  result = subtract(a, b);   break;
    case 3:  result = multiply(a, b);   break;
    case 4:  result = divide(a, b);     break;
    case 5:  result = modulo(a, b);     break;
    case 6:  result = power(a, b);      break;
    case 7:  result = squareRoot(a, b); break;
    case 8:  result = square(a, b);     break;
    case 9:  result = cube(a, b);       break;
    case 10: result = absolute(a, b);   break;
    case 11: result = factorial(a, b);  break;
    case 12: result = percentage(a, b); break;
    case 13: result = average(a, b);    break;
    case 14: result = maximum(a, b);    break;
    case 15: result = minimum(a, b);    break;
    case 16: result = gcd(a, b);        break;
    case 17: result = lcm(a, b);        break;
    case 18: result = hypotenuse(a, b); break;
    default:
        cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}