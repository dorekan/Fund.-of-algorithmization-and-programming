#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Введите символ: P U R L M: ";
    cin >> letter;

    letter = toupper(letter);
    
    switch (letter) {
        case 'P':
            cout << "Poland" << endl;
            break;
        case 'U':
            cout << "Ukraine" << endl;
            break;
        case 'R':
            cout << "Russia" << endl;
            break;
        case 'L':
            cout << "Lithuania" << endl;
            break;
        case 'M':
            cout << "Moldova" << endl;
            break;
        default:
            cout << "Введен неправильный символ" << endl;
            break;
    }
    
    return 0;
}