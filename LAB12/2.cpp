#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    double p;
    cout << "Введите p (p >= 2): ";
    cin >> p;
    
    if (p < 2) {
        cout << "Ошибка: p должно быть >= 2" << endl;
        return 0;
    }
    
    int n = rand() % 10 + 1;

    double arr[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = 0.5*p + (rand() % 100) * (3.0*p / 100.0);
    }
    
    cout << "\nМассив из " << n << " элементов:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    double max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    double half_max = max / 2;
    
    cout << "\nМаксимальный элемент: " << max << endl;
    cout << "Половина максимального: " << half_max << endl;
    cout << "Элементы меньше половины максимального:" << endl;
    
    double sum = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < half_max) {
            cout << arr[i] << " ";
            sum += arr[i];
            count++;
        }
    }
    if (count > 0) {
        double average = sum / count;
        cout << "\nСреднее арифметическое этих элементов: " << average << endl;
    } else {
        cout << "\nНет элементов меньше половины максимального" << endl;
    }
    
    return 0;
}