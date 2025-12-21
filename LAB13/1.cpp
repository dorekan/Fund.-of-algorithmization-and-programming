#include <iostream>
#include <string>

using namespace std;

int main() {
    string lines[12];
    int n;
    cout << "Введите n<=12" << endl;
    cin >> n;
    if (n>12){
        cout << "Ошибка - n>12" << endl;
        cin >> n;
    }
        
    
    for (int i = 0; i < n; i++) {
        cout << "Введите строку до 50 символов - ";
        cin >> lines[i];
    }
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        string s = lines[i];
        
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '3' || s[j] == '7' || s[j] == '8') {
                cnt++;
            }
        }
        
        if (cnt >= 3) {
            cout <<"Ответ: " << endl << s;
        }
    }
    
    return 0;
}