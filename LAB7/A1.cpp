#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Введите значение k: ";
    cin >> k;
    
    double S = 0.0;
    
    for (int i = 1; i <= k; i++) {
        S += i + k / (3.5 * i * i);
    }
    
    cout << "Результат S = " << S << endl;
    
    return 0;
}