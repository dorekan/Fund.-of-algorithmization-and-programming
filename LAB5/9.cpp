#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Введите символ: L O V N M S: ";
    cin >> letter;
    
    letter = toupper(letter);
    
    switch (letter) {
        case 'L':
            cout << "Lidea" << endl;
            break;
        case 'O':
            cout << "Oresa" << endl;
            break;
        case 'V':
            cout << "Vilia" << endl;
            break;
        case 'N':
            cout << "Neman" << endl;
            break;
        case 'M':
            cout << "Myshanka" << endl;
            break;
        case 'S':
            cout << "Svisloch" << endl;
            break;
        default:
            cout << "Введен неправильный символ" << endl;
            break;
    }
    
    return 0;
}