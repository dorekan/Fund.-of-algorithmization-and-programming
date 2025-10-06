#include <iostream>
using namespace std;

int main() {
    char symbol;
    
    cout << "Введите один из символов: * < ! > % ? = + : ";
    cin >> symbol;
    
    switch (symbol) {
        case '*':
            cout << "Умножение" << endl;
            break;
        case '<':
            cout << "Знак меньше" << endl;
            break;
        case '!':
            cout << "Восклицательный знак" << endl;
            break;
        case '>':
            cout << "Знак больше" << endl;
            break;
        case '%':
            cout << "Процент" << endl;
            break;
        case '?':
            cout << "Вопросительный знак" << endl;
            break;
        case '=':
            cout << "Знак равенства" << endl;
            break;
        case '+':
            cout << "Плюс" << endl;
            break;
        default:
       
            cout << "Ошибка: введен неправильный символ!" << endl;
            
            break;
    }
    
    return 0;
}
