#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float x0, x, dx, fx;
    cout << "x0 = ";
    cin >> x0;
    cout << "x = ";
    cin >> x;
    cout << "dx = ";
    cin >> dx;

    
    cout << setw(2) << "f(x)" << setw(15) << "x" << endl;

    while(x0 <= x){
        fx = (2.5*(x0*x0*x0))+(3.2/(x0-2)+(sin(x0)*sin(x0)*sin(x0)));
        cout << setw(2) << fixed << setprecision(3) << fx
                  << setw(15) << fixed << setprecision(3) << x0 << endl;
        x0 += dx;
    }