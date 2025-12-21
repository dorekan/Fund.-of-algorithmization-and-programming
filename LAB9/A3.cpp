#include <iostream>
using namespace std;

void F(int N, int& First, int& Last) {
    // Младшая цифра
    Last = N % 10;

    // Старшая цифра
    First = N;
    while (First >= 10) {
        First /= 10;
    }
}

int main() {
    int number;
    cout << "Введите натуральное число: ";
    cin >> number;

    int firstDigit, lastDigit;
    F(number, firstDigit, lastDigit);

    cout << "Старшая цифра: " << firstDigit << endl;
    cout << "Младшая цифра: " << lastDigit << endl;

    return 0;
}