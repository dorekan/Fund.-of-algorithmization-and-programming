#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Введите символ: P K T B L R: ";
    cin >> letter;
    
    letter = toupper(letter);
    
    switch (letter) {
        case 'P':
            cout << "Prague" << endl;
            break;
        case 'K':
            cout << "Kyiv" << endl;
            break;
        case 'T':
            cout << "Tallinn" << endl;
            break;
        case 'B':
            cout << "Berlin" << endl;
            break;
        case 'L':
            cout << "Lisbon" << endl;
            break;
        case 'R':
            cout << "Riga" << endl;
            break;
        default:
            cout << "Введен неправильный символ" << endl;
            break;
    }
    
    return 0;
}