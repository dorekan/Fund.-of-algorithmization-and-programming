#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "Введите одну из букв: A, S, D, F, B, R: ";
    cin >> letter;
    
    letter = toupper(letter);
    
    switch (letter) {
        case 'A':
            cout << "Apple" << endl;
            break;
        case 'S':
            cout << "Sun" << endl;
            break;
        case 'D':
            cout << "Dog" << endl;
            break;
        case 'F':
            cout << "Flower" << endl;
            break;
        case 'B':
            cout << "Book" << endl;
            break;
        case 'R':
            cout << "Rainbow" << endl;
            break;
        default:
            cout << "Введен неправильный символ!";
            
            break;
    }
    
    return 0;
}