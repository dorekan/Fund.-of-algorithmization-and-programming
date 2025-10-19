#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long n = 0;
    double fx, x, gn = 0;

    cout << "x = ";
    cin >> x;

    fx = ((2.4*(x*x))+(sin(x)*sin(x)*sin(x)));

    do{
        n+=1;
        gn += 1.0/n;
    }while(gn <=fx);
    cout << n;
    
}