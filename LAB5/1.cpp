#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    
    cout << "Введите номер дня недели (1-7): ";
    cin >> dayNumber;
    
    if (dayNumber < 1 and dayNumber > 7) {
        cout << "Номер должен быть от 1 до 7" << endl;
    } else {
        int pDay;
        if (dayNumber == 1) {
            pDay = 7;
        } else {
            pDay = dayNumber - 1;
        }
        
        cout << "Предыдущий день:";
        switch (pDay) {
            case 1: cout << "Понедельник"; break;
            case 2: cout << "Вторник"; break;
            case 3: cout << "Среда"; break;
            case 4: cout << "Четверг"; break;
            case 5: cout << "Пятница"; break;
            case 6: cout << "Суббота"; break;
            case 7: cout << "Воскресенье"; break;
        }
        cout << endl;
    }
    
    return 0;
}
