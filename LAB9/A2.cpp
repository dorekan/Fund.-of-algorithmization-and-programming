#include <iostream>
using namespace std;

// Вариант 1: с указателем
void flip(int* N) {
    int reversed = 0;
    int original = *N;
    while (original > 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }
    *N = reversed;
}

// Вариант 2: со ссылкой
void flip(int& N) {
    int reversed = 0;
    int original = N;
    while (original > 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }
    N = reversed;
}

// Вариант 3: возвращает новое значение
int flip(int N) {
    int reversed = 0;
    while (N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }
    return reversed;
}

int main() {
    int num = 567321;

    // Вариант 1
    int n1 = num;
    flip(&n1);
    cout << "Указатель: " << n1 << endl;

    // Вариант 2
    int n2 = num;
    flip(n2);
    cout << "Ссылка: " << n2 << endl;

    // Вариант 3
    int n3 = flip(num);
    cout << "Возврат значения: " << n3 << endl;

    return 0;
}