#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Введите символ: M S N L B: ";
    cin >> letter;
    
    letter = toupper(letter);
    
    switch (letter) {
        case 'M':
            cout << "Minsk" << endl;
            break;
        case 'S':
            cout << "Soligorsk" << endl;
            break;
        case 'N':
            cout << "Novopolotsk" << endl;
            break;
        case 'L':
            cout << "Lida" << endl;
            break;
        case 'B':
            cout << "Brest" << endl;
            break;
        default:
            cout << "Введен неправильный символ" << endl;
            break;
    }
    
    return 0;
}