#include <iostream>
using namespace std;
// Template function to compute the maximum of three values
template<typename T>
T maxOfThree(T a, T b, T c) {
    T maxVal = a > b ? a : b;
    return maxVal > c ? maxVal : c;
}

int main() {
    // Example with integers
    int intResult = maxOfThree(5, 10, 3);
    cout << "Maximum of three integers: " << intResult << endl;

    // Example with floating-point numbers
    float floatResult = maxOfThree(3.14f, 2.71f, 5.0f);
    cout << "Maximum of three floating-point numbers: " << floatResult << endl;

    // Example with strings (char*)
    const char* str1 = "mar";
    const char* str2 = "para";
    const char* str3 = "cireasa";
    const char* stringResult = maxOfThree(str1, str2, str3);
    cout << "Maximum of three strings: " << stringResult << endl;

    return 0;
}
