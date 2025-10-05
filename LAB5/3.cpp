#include <iostream>
using namespace std;

int main() {
    int digit;
    
    cout << "Введите десятичную цифру (0-9): ";
    cin >> digit;
    
    switch (digit) {
        case 0:
            cout << "ноль" << endl;
            break;
        case 1:
            cout << "один" << endl;
            break;
        case 2:
            cout << "два" << endl;
            break;
        case 3:
            cout << "три" << endl;
            break;
        case 4:
            cout << "четыре" << endl;
            break;
        case 5:
            cout << "пять" << endl;
            break;
        case 6:
            cout << "шесть" << endl;
            break;
        case 7:
            cout << "семь" << endl;
            break;
        case 8:
            cout << "восемь" << endl;
            break;
        case 9:
            cout << "девять" << endl;
            break;
        default:
            cout << "Ошибка: введена неправильная цифра!" << endl;
           
            break;
    }
    
    return 0;
}