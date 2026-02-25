#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    // Asking for user input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Applying the conversion formula
    // We use 9.0 / 5.0 to ensure floating-point division
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Displaying the result
    cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}