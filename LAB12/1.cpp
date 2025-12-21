#include <iostream>
#include <cstdlib>   // для rand() и srand()
#include <ctime>     // для time()

using namespace std;
int sumDivisibleByThree(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) { 
            total += arr[i];
        }
    }
    return total;
}

void printArray(int arr[], int size, string name) {
    cout << name << " = [";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    srand(time(0));
    int k;
    while (true) {
        cout << "Введите k (от 4 до 8): ";
        cin >> k;
        
        if (k > 3 && k < 9) {
            break;
        } else {
            cout << "k должно быть между 4 и 8!" << endl;
        }
    }
    
    int m = rand() % 7 + 1;
    cout << "Размер массивов: m = " << m << endl << endl;
    
    // Создаем 4 массива
    int array1[m], array2[m], array3[m], array4[m];
    
    for (int i = 0; i < m; i++) {
        int range = 3 * k - k + 1;
        array1[i] = rand() % range + k;
        array2[i] = rand() % range + k;
        array3[i] = rand() % range + k;
        array4[i] = rand() % range + k;
    }
    
    cout << "Сформированные массивы:" << endl;
    printArray(array1, m, "array1");
    printArray(array2, m, "array2");
    printArray(array3, m, "array3");
    printArray(array4, m, "array4");
    
    cout << endl << "Сумма элементов, кратных 3 в каждом массиве:" << endl;
    cout << "array1: " << sumDivisibleByThree(array1, m) << endl;
    cout << "array2: " << sumDivisibleByThree(array2, m) << endl;
    cout << "array3: " << sumDivisibleByThree(array3, m) << endl;
    cout << "array4: " << sumDivisibleByThree(array4, m) << endl;
    
    return 0;
}