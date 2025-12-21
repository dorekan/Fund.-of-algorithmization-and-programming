#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double x) {
    return 1.3 * pow(x, 3) + 1.9 * x + 5.4;
}

double bisection(double a, double b, double epsilon) {
    double fa = f(a);
    double fb = f(b);
    
    if (fa * fb >= 0) {
        cout << "На отрезке [" << a << ", " << b << "] функция не меняет знак." << endl;
        cout << "f(a) = " << fa << ", f(b) = " << fb << endl;
        return NAN;
    }
    
    cout << fixed << setprecision(5);

    
    int iteration = 0;
    double c;
    
    while ((b - a) / 2 > epsilon) {
        iteration++;
        c = (a + b) / 2;
        double fc = f(c);
        

        cout << setw(8) << iteration << " | " 
             << setw(10) << a << " | "
             << setw(10) << b << " | "
             << setw(10) << c << " | "
             << setw(9) << fc << endl;
        
        if (fc == 0.0) {
            break;
        } else if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }
    }
    

    c = (a + b) / 2;
    double fc = f(c);
    
    cout << setw(8) << iteration+1 << " | " 
         << setw(10) << a << " | "
         << setw(10) << b << " | "
         << setw(10) << c << " | "
         << setw(9) << fc << endl;
    
    cout << "\nКонечный результат: x = " << c << endl;
    cout << "f(x) = " << fc << endl;
    cout << "Точность: " << (b - a) / 2 << " < " << epsilon << endl;
    
    return c;
}

int main() {
    double a, b;
    const double epsilon = 0.005;
    
    cout << "=== Метод деления отрезка пополам ===" << endl;
    cout << "Функция: f(x) = 1.3x^3 + 1.9x + 5.4" << endl;
    cout << "Точность: " << epsilon << endl;

    cout << "\nВведите левую границу интервала a: ";
    cin >> a;
    cout << "Введите правую границу интервала b: ";
    cin >> b;
    
    if (abs(b - a) > 1.0) {
        cout << "Длина интервала больше 1. Пожалуйста, выберите меньший интервал." << endl;
        return 1;
    }
    
    double fa = f(a);
    double fb = f(b);
    cout << "\nf(" << a << ") = " << fa << endl;
    cout << "f(" << b << ") = " << fb << endl;
    
    double root = bisection(a, b, epsilon);
    
    if (!isnan(root)) {
        cout << "\nПриближенный корень: " << fixed << setprecision(5) << root << endl;
    }
    
    return 0;
}