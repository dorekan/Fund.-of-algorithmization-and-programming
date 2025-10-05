#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Введите символ: N B P D S: ";
    cin >> letter;
    
    letter = toupper(letter);
    
    switch (letter) {
        case 'N':
            cout << "Neman" << endl;
            break;
        case 'B':
            cout << "Berezina" << endl;
            break;
        case 'P':
            cout << "Pripyat" << endl;
            break;
        case 'D':
            cout << "Dnepr" << endl;
            break;
        case 'S':
            cout << "Sozh" << endl;
            break;
        default:
            cout << "Введен неправильный символ" << endl;
            break;
    }
    
    return 0;
}